#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

void setup()
{
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  
}

void loop()
{
  if (digitalRead(8) == LOW)
  {
    myservo1.write(0);
    delay(2000);
    myservo1.write(179);
    delay(2000);
  }
  if (digitalRead(9) == LOW)
  {
    myservo2.write(0);
    delay(2000);
    myservo2.write(89);
    delay(2000);
  }
  if (digitalRead(10) == LOW)
  {
    for (int i = 0; i<180; i++)
    {
      myservo3.write(i);
    }
    for (int i = 179; i>=0; i--)
    {
      myservo3.write(i);
    }
  }
}