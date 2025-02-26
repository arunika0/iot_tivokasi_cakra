#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(5, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(26, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  delay(30000);
  digitalWrite(5, LOW);

  digitalWrite(32, HIGH);
  delay(5000);
  digitalWrite(32, LOW);

  digitalWrite(26, HIGH);
  delay(20000);
  digitalWrite(26, LOW);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}