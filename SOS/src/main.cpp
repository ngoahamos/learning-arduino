#include <Arduino.h>



int SHORT_INDICATOR = 250;
int LONG_INDICATOR = 700;
int DELAY_BETWEEN = 2000;

int PIN_8 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_8, OUTPUT);
  
}

void loop() {
  
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(LONG_INDICATOR);

  // O
  digitalWrite(PIN_8, HIGH);
  delay(LONG_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(LONG_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(LONG_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(LONG_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(LONG_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(LONG_INDICATOR);

  // S
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, HIGH);
  delay(SHORT_INDICATOR);
  digitalWrite(PIN_8, LOW);

  // let's delay before starting all over again
  delay(DELAY_BETWEEN);


}

