#include <LiquidCrystal.h>

//Pinos do LCD
LiquidCrystal lcd(12,11,5,4,3,2);


float valor=A0;
float varia=0;
float Y=0;



void setup() {
  pinMode(valor, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  varia=analogRead(valor);

  Y= float (varia*20)/1023;

  lcd.print("Y");
  lcd.setCursor(0,0);

}
