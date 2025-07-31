#include "BluetoothSerial.h"
#include <cctype>

// Cria o objeto BluetoothSerial
BluetoothSerial ESP_BT;

#define RED_PIN 2
#define YELLOW_PIN 4
#define WHITE_PIN 15
#define GREEN_PIN 5

void setup() {
  Serial.begin(115200);
  
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(WHITE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
 
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(WHITE_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);

  Serial.println("[*] Iniciando o bluetooth...");

  if (ESP_BT.begin("Gabriel32")) {
    Serial.println("[✓] Bluetooth iniciado.");

  } else {
    Serial.println("[X] Falha ao iniciar Bluetooth.");

  }
}

// função pra deixar a string recebida em lowercase
String toLowerCase(String str){
    for(int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }

    return str;
}

void BLE(){
  if (ESP_BT.available()) {
    String command = ESP_BT.readStringUntil('\n');
    command.trim(); // remove espaços e quebras
    
    command = toLowerCase(command);

    Serial.println("Recebido: " + command);

    if (command.indexOf("desligar") != -1 && command.indexOf("vermelho") != -1) {
      digitalWrite(RED_PIN, LOW);
      ESP_BT.println("LED vermelho desligado!");

    }else if (command.indexOf("vermelho") != -1) {
      digitalWrite(RED_PIN, HIGH);
      ESP_BT.println("LED vermelho ligado!");

    }else if (command.indexOf("desligar") != -1 && command.indexOf("amarelo") != -1){
      digitalWrite(YELLOW_PIN, LOW);
      ESP_BT.println("LED amarelo desligado!");

    }else if (command.indexOf("amarelo") != -1){
      digitalWrite(YELLOW_PIN, HIGH);
      ESP_BT.println("LED amarelo ligado!");

    }else if (command.indexOf("desligar") != -1 && command.indexOf("branco") != -1){
      digitalWrite(WHITE_PIN, LOW);
      ESP_BT.println("LED branco desligado!");

    }else if (command.indexOf("branco") != -1){
      digitalWrite(WHITE_PIN, HIGH);
      ESP_BT.println("LED branco ligado!");

    }else if (command.indexOf("desligar") != -1 && command.indexOf("verde") != -1){
      digitalWrite(GREEN_PIN, LOW);
      ESP_BT.println("LED verde desligado!");

    }else if (command.indexOf("verde") != -1){
      digitalWrite(GREEN_PIN, HIGH);
      ESP_BT.println("LED verde ligado!");
    }
  }

}

void loop() {
 BLE();
}