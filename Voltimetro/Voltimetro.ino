#include <LiquidCrystal.h>

float valor=A0;
float varia=0;
float Y=0;



void setup() {
  pinMode(valor, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  varia=analogRead(valor);

  Y= float (varia*5)/1023;

  
  Serial.println(Y,7);
}
