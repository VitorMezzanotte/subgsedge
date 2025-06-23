# Flood Track Solutions

**Autor:** Vitor Mezzanotte Constante  
**Curso:** Engenharia de Software — FIAP  
**Disciplina:** Edge Computing  

---

## 🆘 Descrição do Problema

Enchentes e alagamentos urbanos causam grandes prejuízos à população, colocando em risco vidas, infraestrutura e bens materiais. A ausência de sistemas locais de alerta pode impedir que as pessoas tomem decisões preventivas a tempo.

---

## 💡 Visão Geral da Solução

O **Flood Track Solutions** é um sistema embarcado de baixo custo, projetado com Arduino, que monitora o nível da água em tempo real e aciona alertas locais por meio de **LEDs** e **buzzer**. O objetivo é oferecer uma forma acessível e eficiente de detectar alagamentos em áreas de risco, com rápida resposta visual e sonora.

---

## 🔧 Componentes Utilizados

- Arduino Uno R3  
- Potenciômetro (simulando sensor de nível de água)  
- LED vermelho (alerta visual)  
- Buzzer (alerta sonoro)  
- Cabos de conexão  
- (Opcional: Resistor de 220Ω)

---

## ⚙️ Funcionamento do Sistema

- O **potenciômetro** simula o nível da água.  
- Quando o valor lido ultrapassa o limite de segurança (700), o sistema:
  - **Acende o LED vermelho**
  - **Ativa o buzzer com um sinal sonoro contínuo**
- O monitor serial exibe os valores lidos do sensor em tempo real.

---

## 💻 Instruções para Simulação

### 🔗 Simulador: Tinkercad  
[Acesse o projeto no Tinkercad aqui](https://www.tinkercad.com/things/ikBlqP1smBC-sub-gsedge?sharecode=fpORihQ_m0qnQozSIIkL1NBVs8tho7EKTAQeuEwZtbk)

1. Faça login no Tinkercad com sua conta.  
2. Clique em **“Tinker this”** para editar ou simular o projeto.  
3. Gire o potenciômetro e observe a ativação do LED e buzzer.  
4. Acompanhe os valores no **Serial Monitor**.

---

## 🧪 Código Fonte

O código está no arquivo [`FloodTrackSolutions.ino`](./FloodTrackSolutions.ino) e está devidamente comentado, dizendo o significado de cada linha do código.

---

## 📹 Vídeo Demonstrativo

[Assista aqui ao vídeo explicativo do projeto](https://www.youtube.com/watch?v=qsjR3kgowxs)

---

## ✅ Observações

- Projeto individual para a disciplina de Edge Computing – GS Substitutiva - 1º semestre de 2025.  
- Simulado em ambiente virtual (Tinkercad), validando os requisitos propostos pelo professor.

---

© 2025 — Vitor Mezzanotte Constante
