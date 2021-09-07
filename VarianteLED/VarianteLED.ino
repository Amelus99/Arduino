//Variaveis
int POT=A1;
int LED=6;
int Num=0;
int Num2=0;
void setup() {

  pinMode (LED, OUTPUT); //Aciona LED
  
  pinMode (POT, INPUT); //Entrada Variavel

  }

void loop() {
  
  Num=analogRead(POT);
  
  Num2=analogRead(LED);
  
  Num2=map(Num,0,1023,0,255);

  analogWrite(LED,Num2);

    

}
