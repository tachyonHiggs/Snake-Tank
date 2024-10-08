// include the library code:
#include <LiquidCrystal.h>
 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(19, 23, 18, 17, 16, 15);
 
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("circuitschools.");
  int a = 0;
}
 
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // print the number of seconds since reset:
  lcd.print(a);
  lcd.setCursor(0, 1);
  lcd.print(a*2);
  delay(2000);
  ++a;
}