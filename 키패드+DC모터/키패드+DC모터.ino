#include <IRremote.h>
#include <Keypad.h>

// C++ code
//

const byte COLS = 4;  //가로
const byte ROWS = 4;  //세로

byte colPins[COLS] = {6, 7, 8, 9};
byte rowPins[ROWS] = {2, 3, 4, 5};

char keymatrix[ROWS][COLS] = 
{{'1', '2', '3', 'A'},
 {'4', '5', '6', 'B'},
 {'7', '8', '9', 'C'},
 {'*', '0', '#', 'D'}};
  
Keypad mykeypad = Keypad(makeKeymap(keymatrix),
                         rowPins, colPins, ROWS, COLS);

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT); // WHELL1 +
  pinMode(11, OUTPUT); // WHELL1 -
  pinMode(12, OUTPUT); // WHELL2 +
  pinMode(13, OUTPUT); // WHELL2 -
}

void loop()
{
  char key = mykeypad.getKey();
  if(key == '2') // FRONT 2
  {
    digitalWrite (10, HIGH);
    digitalWrite (11, LOW);
    digitalWrite (12, HIGH);
    digitalWrite (13, LOW);
  }
  else if (key == '8') // back 8 
    {
     digitalWrite (10, LOW);
     digitalWrite (11, HIGH);
     digitalWrite (12, LOW);
     digitalWrite (13, HIGH); 
    }
  else if (key == '5') // STOP 5  
    {
     digitalWrite (10, LOW);
     digitalWrite (11, LOW);
     digitalWrite (12, LOW);
     digitalWrite (13, LOW); 
    }
  else if (key == '4') // LEFT 4
    {
     digitalWrite (10, HIGH);
     digitalWrite (11, LOW);
     digitalWrite (12, LOW);
     digitalWrite (13, LOW); 
    }
  else if (key == '6') // RIGHT 6  
    {
     digitalWrite (10, LOW);
     digitalWrite (11, LOW);
     digitalWrite (12, HIGH);
     digitalWrite (13, LOW); 
    }                
    
   
}