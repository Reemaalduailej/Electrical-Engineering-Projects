#include <Servo.h>


int PotValue = 0;
int ServoValue = 0;

Servo servo_11;
Servo servo_10;
Servo servo_9;
Servo servo_6;
Servo servo_5;

void setup()
{
  pinMode(A0, INPUT);
  servo_11.attach(11, 500, 2500);
  pinMode(A1, INPUT);
  servo_10.attach(10, 500, 2500);
  pinMode(A2, INPUT);
  servo_9.attach(9, 500, 2500);
  pinMode(A3, INPUT);
  servo_6.attach(6, 500, 2500);
  pinMode(A4, INPUT);
  servo_5.attach(5, 500, 2500);
}

void loop()
{
  PotValue = analogRead(A0);
  ServoValue = map(PotValue, 0, 1023, 0, 180);
  servo_11.write(ServoValue);
  PotValue = analogRead(A1);
  ServoValue = map(PotValue, 0, 1023, 0, 180);
  servo_10.write(ServoValue);
  PotValue = analogRead(A2);
  ServoValue = map(PotValue, 0, 1023, 0, 180);
  servo_9.write(ServoValue);
  PotValue = analogRead(A3);
  ServoValue = map(PotValue, 0, 1023, 0, 180);
  servo_6.write(ServoValue);
  PotValue = analogRead(A4);
  ServoValue = map(PotValue, 0, 1023, 0, 180);
  servo_5.write(ServoValue);
  delay(10);
}