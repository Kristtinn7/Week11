#include <Arduino.h>

// กำหนดพิน LED (พิน 2 สำหรับ ESP32 หรือ LED_BUILTIN สำหรับ Arduino Uno)
#ifndef LED_BUILTIN
  #define LED_BUILTIN 2
#endif

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("System Initialized!");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED Status: ON");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED Status: OFF");
  delay(1000);
}