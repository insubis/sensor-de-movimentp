// Incluindo a biblioteca do sensor de movimento
#include<HCSR501.h>

// Definindo o pino do sensor de movimento
#define SENSOR_PIN 2

// Definindo o pino do LED
#define LED_PIN 13

// Inicializando o sensor de movimento
HCSR501 motionSensor(SENSOR_PIN);

void setup() {
  // Inicializando o LED como saída
  pinMode(LED_PIN, OUTPUT);
  
  // Inicializando o sensor de movimento
  motionSensor.Init();
}

void loop() {
  // Verificando se há movimento detectado
  if (motionSensor.GetState() == HIGH) {
    // Acendendo o LED
    digitalWrite(LED_PIN, HIGH);
    delay(1000); // Aguarda 1 segundo
  } else {
    // Desligando o LED
    digitalWrite(LED_PIN, LOW);
  }
}
