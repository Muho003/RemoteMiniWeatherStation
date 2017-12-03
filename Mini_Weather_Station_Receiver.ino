
#include <VirtualWire.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
   Serial.begin(9600);
    
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

    // Print a message to the LCD.
  lcd.print("hello, world!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
