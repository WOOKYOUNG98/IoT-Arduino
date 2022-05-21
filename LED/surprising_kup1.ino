// C++ code
//

int flag = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(7) == LOW)
  {
	if (flag == 0)
    	flag=1;
  }
  else
  {
    if (flag == 1)
    {
      if (digitalRead(8) == HIGH)
        digitalWrite(8, LOW);
      else
        digitalWrite(8, HIGH);
      flag=0;
    }
  }
}