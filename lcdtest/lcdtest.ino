#include <LiquidCrystal.h>
LiquidCrystal lcd( 8, 9, 4, 5, 6, 7 );

void setup()
{
   //button adc input
   pinMode( A0, INPUT );         //ensure A0 is an input
   digitalWrite( A0, LOW );      //ensure pullup is off on A0
   //lcd backlight control
   digitalWrite( 10, HIGH );  //backlight control pin D3 is high (on)
   pinMode( 10, OUTPUT );     //D3 is an output
   //set up the LCD number of columns and rows: 
   lcd.begin( 16, 2 );
}

void loop()
{
  lcd.setCursor( 0, 0 );   //top left
   lcd.print( "Analog Key Read" );
  lcd.setCursor(0,1);
  lcd.print( analogRead( A0 ) );
  delay(250);
  lcd.clear();
}
