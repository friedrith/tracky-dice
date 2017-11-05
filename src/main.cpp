#include <Arduino.h>

const int LED_PIN = 8;
const int BUTTON_PIN = 2;

//unsigned long time;
//unsigned long previousTime = 0;

volatile byte state = LOW;
//int incomingByte = 0;

unsigned long lastPushTime = 0;

void handlePush() {


  // time = millis();
  if ((millis() - lastPushTime) > 300) {
    state = !state;
    if (state == HIGH ) {
      Serial.println("Start task");
      // previousTime = time;
    } else {
      Serial.println("Stop task");
    }
  } else {
    //Serial.println("You pushed too quickly");
  }

  lastPushTime = millis();
}

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), handlePush, FALLING);
  Serial.begin(9600);
}

void loop()
{
  if (state == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  // delay(1000); // wait 1 second
}
