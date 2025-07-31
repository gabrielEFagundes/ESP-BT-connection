# ESP-BT-connection

Conexão Bluetooth para controlar 4 LEDs diferentes utilizando o ESP32 (ou ESP8266) via terminal serial Bluetooth, ideal para testar e aprender automação básica com microcontroladores e Android.

## 🚀 Sobre o Projeto

Este projeto permite acender e apagar até 4 LEDs conectados ao ESP via comandos enviados por um aplicativo de terminal Bluetooth no Android. Perfeito para quem deseja praticar comunicação serial, automação residencial ou criar protótipos de controle remoto simples.

## ⚡ Funcionalidades

- Conexão Bluetooth serial com ESP32/ESP8266
- Controle individual de 4 LEDs
- Comandos simples e intuitivos
- Compatível com apps como Bluetooth Terminal

## 🛠️ Materiais Utilizados

- ESP32 ou ESP8266
- 4 LEDs + resistores
- Protoboard e jumpers
- Fonte 5V
- Smartphone Android com app de terminal Bluetooth

## 🔥 Como Usar

1. **Monte o circuito** conforme o diagrama abaixo (ou adapte para seu ESP):
2. **Faça upload do código** para seu ESP via Arduino IDE.
3. **Conecte-se ao ESP** usando um app de terminal Bluetooth.
4. **Envie os comandos** para acender/apagar os LEDs:

| Comando | Função               |
|---------|----------------------|
| `L1ON`  | Liga LED 1           |
| `L1OFF` | Desliga LED 1        |
| `L2ON`  | Liga LED 2           |
| `L2OFF` | Desliga LED 2        |
| `L3ON`  | Liga LED 3           |
| `L3OFF` | Desliga LED 3        |
| `L4ON`  | Liga LED 4           |
| `L4OFF` | Desliga LED 4        |

- Combine comandos para controlar todos os LEDs!

## 📲 Sugestão de Aplicativo Android

- [Serial Bluetooth Terminal (Google Play)](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal)

## 📷 Exemplo de Montagem

> *(Adicione aqui uma imagem do circuito montado/print do app, se possível!)*

## ✨ Dicas

- Certifique-se de parear o ESP com o celular antes de conectar pelo app.
- Você pode adaptar para mais dispositivos além de LEDs, como relés e motores!
- Fique à vontade para modificar os comandos no código conforme sua necessidade.

---

Feito com 💡 por [gabrielEFagundes](https://github.com/gabrielEFagundes)
