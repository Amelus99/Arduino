#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
float leitor=A0;
float val=0;
int led1=10;
int led2=9;
int led3=8;
int led4=7;


void setup() {
      pinMode(led1, OUTPUT);
      pinMode(led2, OUTPUT);
      pinMode(led3, OUTPUT);
      pinMode(led4, OUTPUT);
      pinMode(leitor, INPUT);
      lcd.begin(16, 2);
     


}

void loop() {
  val=analogRead(leitor);
  


}
