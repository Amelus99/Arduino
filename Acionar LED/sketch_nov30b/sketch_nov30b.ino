  //Variaveis
int LED=13;
int BOTAO=4;
int BOTAO2=7;
int EBotao=0;
int EBotao2=0;
void setup(){
  pinMode(LED, OUTPUT); //Liga
  pinMode(BOTAO, INPUT); //Acionamento
  pinMode(BOTAO2, INPUT); //Acionamento
}
void loop(){
  EBotao=digitalRead(BOTAO);
  EBotao2=digitalRead(BOTAO2);

  if (EBotao == 1 && EBotao2 == 1){
    digitalWrite(LED, HIGH);
    }
  else if  (EBotao == 0 && EBotao2 == 1){
    digitalWrite(LED, HIGH);
    }
   else{
     digitalWrite(LED, LOW);
   }
}

