#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(800);
  digitalWrite(13, LOW);
  delay(200);

}