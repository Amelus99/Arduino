#include <LiquidCrystal.h>

//Pinos do LCD
LiquidCrystal lcd(12,11,5,4,3,2);
int b1=6;
int b2=7;
int botao1=0;
int botao2=0;

void setup() {
  lcd.begin(16, 2);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
 

}

void loop() {
  botao1=digitalRead(b1);
  botao2=digitalRead(b2);
  if (botao1==1){
    lcd.setCursor(0,0);
    lcd.print("acionamento");
    
    }
  if (botao2==1){
    lcd.setCursor(0,1);
    lcd.print("desacionamento");}

  else
    lcd.clear();
  }
  

  


