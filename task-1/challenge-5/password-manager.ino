#include <LiquidCrystal.h> 
#include <Keypad.h>

char* password ="77"; //create a password
int flag=0;
const byte rows = 4; //number of the keypad's rows and columns
const byte cols = 4;
int i=0;
char keyMap [rows] [cols] = { //define the cymbols on the buttons of the keypad password
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins [rows] = {1, 2, 3, 4}; //pins of the keypad
byte colPins [cols] = {5, 6, 7, 8};

Keypad myKeypad = Keypad( makeKeymap(keyMap), rowPins, colPins, rows, cols);

LiquidCrystal lcd (A0, A1, A2, A3, A4, A5); // pins of the LCD. (RS, E, D4, D5, D6, D7)

void setup(){

  lcd.begin(16, 2);
}

void loop(){

  char whichKey = myKeypad.getKey(); //define which key is pressed with getKey

  lcd.setCursor(0, 1);
  lcd.print("Enter Password");

  if(whichKey == '*' || whichKey == '#' || whichKey == 'A' ||       //define invalid keys
  whichKey == 'B' || whichKey == 'C' || whichKey == 'D')
  
  {
	i=0;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Invalid Key!");
    delay(1000);
    lcd.clear();
  }
  
  
  else if (whichKey == password[i] )
  {		lcd.clear();
          lcd.print("Access Granted");
}
}


