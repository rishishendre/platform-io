#include <Arduino.h>
#include <Servo.h>
Servo rishi;
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  Serial.println("rishi");

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}