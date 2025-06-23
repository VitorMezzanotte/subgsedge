
/*
  Projeto: Flood Track Solutions
  Objetivo: Detectar nível de água e emitir alerta visual e sonoro em caso de enchente.
  Componentes:
    - Potenciômetro simulando sensor de nível de água
    - LED vermelho (alerta visual)
    - Buzzer (alerta sonoro)
    - Arduino Uno
*/

const int sensorNivelAgua = A0; // Potenciômetro simulando sensor de nível de água
const int ledAlerta = 13;       // LED vermelho
const int buzzer = 12;          // Buzzer

void setup() {
  pinMode(ledAlerta, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int nivel = analogRead(sensorNivelAgua); // Leitura do sensor
  Serial.print("Nível da água: ");
  Serial.println(nivel);

  // Definindo o limite para alerta de enchente
  if (nivel > 700) {
    digitalWrite(ledAlerta, HIGH); // Acende LED
    tone(buzzer, 1000);            // Emite som no buzzer
  } else {
    digitalWrite(ledAlerta, LOW);  // Apaga LED
    noTone(buzzer);                // Desliga buzzer
  }

  delay(500); // Aguarda meio segundo antes da próxima leitura
}
