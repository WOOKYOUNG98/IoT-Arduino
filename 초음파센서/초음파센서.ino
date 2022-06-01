#include <LiquidCrystal.h>

// C++ code
//

LiquidCrystal mylcd (12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(6, INPUT);
  mylcd.begin(16,2);

  mylcd.clear();
}

void loop()
{
  mylcd.setCursor(0,0);
  mylcd.print("supersonic : ");
  mylcd.print(digitalRead(7));
  delay(100);
  mylcd.clear();
  
}