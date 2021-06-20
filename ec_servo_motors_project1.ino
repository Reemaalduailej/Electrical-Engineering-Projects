
#include <Servo.h>

int pos = 90;

Servo servo_5;
Servo servo_6;
Servo servo_9;
Servo servo_10;
Servo servo_11;

void setup()
{
  servo_5.attach(5, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);

}

void loop()
{
  servo_5.write(pos);
  servo_6.write(pos);
  servo_9.write(pos);
  servo_10.write(pos);
  servo_11.write(pos);
  delay(15); 
}