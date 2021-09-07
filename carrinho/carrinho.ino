#include <SoftwareSerial.h>


SoftwareSerial bt(0,1);
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int val = 0;
#define Pin

void setup ()
{
  Serial.begin(9600);
bt.begin(9600);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
}
void loop(){
  if (bt.available())
  {
   char inByte = bt.read();
   Serial.println(inByte);
  
   if (inByte == 'F') //frente
   {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
   }
   if (inByte == 'S') //parar
   {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
   }
   if (inByte == 'B') //ré
   {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
   }
     if (inByte == 'R')//direita
     {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
     }
      if (inByte == 'L')//esquerda
     {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
     }
     if (inByte == 'G')//esquerdaFRENTE
     {
 digitalWrite(IN1, HIGH);
 analogWrite(IN2, 128);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
     }
     if (inByte == 'I')//direitaFRENTE
     {
 digitalWrite(IN1, HIGH);
 analogWrite(IN2, LOW);
 analogWrite(IN3, 128);
 digitalWrite(IN4, LOW);
     }
     if (inByte == 'H')//esquerdaRÉ
     {
 digitalWrite(IN1, LOW);
 analogWrite(IN2, 128);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
     }
     if (inByte == 'J')//direitaRÉ
     {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 analogWrite(IN3, 128);
 digitalWrite(IN4, HIGH);
     }

    
     }
     }



