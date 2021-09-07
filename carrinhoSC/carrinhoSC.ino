#include <SoftwareSerial.h>

SoftwareSerial bt(0,1);
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int veloA = 3;
int veloB = 9;

void setup ()
{
  Serial.begin(9600);
bt.begin(9600);

//MOTOR12
pinMode(IN1,OUTPUT); 
pinMode(IN2,OUTPUT);
pinMode(veloA, OUTPUT);

//MOTOR34
pinMode(IN3,OUTPUT); 
pinMode(IN4,OUTPUT);
pinMode(veloB, OUTPUT);
}
void loop(){
   if (bt.available())
  {
   char inByte = bt.read();
   Serial.println(inByte);

     switch(inByte) {

//DIREÇOES      
      
   case 'F': //frente
 
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
break;
  
   case 'S': //parar
   
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);
break;
   
   case 'B': //ré
   
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
break;
    
    case 'R': //direita
     
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, HIGH);
break;
    case 'L': //esquerda
     
digitalWrite(IN1, HIGH);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
break;
     
     case 'G': //esquerdaFRENTE
    
digitalWrite(IN1, HIGH);
analogWrite(IN2, 128);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
break;
     case 'I': //direitaFRENTE
  
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
analogWrite(IN3, 128);
digitalWrite(IN4, LOW);
break;
     
      case 'H': //esquerdaRÉ
     
digitalWrite(IN1, LOW);
analogWrite(IN2, 128);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
break;
   
      case 'J': //direitaRÉ
     
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
analogWrite(IN3, 128);
digitalWrite(IN4, HIGH);
break;

//VELOCIDADES

      case '0':

analogWrite(veloA,0);
analogWrite(veloB,0);
break;
      case '1':

analogWrite(veloA,25);
analogWrite(veloB,25);
break;
      case '2':

analogWrite(veloA,50);
analogWrite(veloB,50);
break;
      case '3':

analogWrite(veloA,75);
analogWrite(veloB,75);
break;
      case '4':

analogWrite(veloA,100);
analogWrite(veloB,100);
break;
      case '5':

analogWrite(veloA,125);
analogWrite(veloB,125);
break;
      case '6':

analogWrite(veloA,150);
analogWrite(veloB,150);
break;
      case '7':

analogWrite(veloA,175);
analogWrite(veloB,175);
break;
      case '8':

analogWrite(veloA,200);
analogWrite(veloB,200);
break;
      case '9':

analogWrite(veloA,225);
analogWrite(veloB,225);
break;
      case 'q':

analogWrite(veloA,255);
analogWrite(veloB,255);
break;
}
  }
}
