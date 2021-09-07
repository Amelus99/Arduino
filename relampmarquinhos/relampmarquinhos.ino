int motdianteiro1IN1 = 11;  // ENTRADA DIGITAL IN1 DO MÓDULO BLUETOOTH
int motdianteiro2IN2 = 10;  // ENTRADA DIGITAL IN2 DO MÓDULO BLUETOOTH
int mottraseiro1IN3 = 6;    // ENTRADA DIGITAL IN3 DO MÓDULO BLUETOOTH
int mottraseiro2IN4 = 5;    // ENTRADA DIGITAL IN4 DO MÓDULO BLUETOOTH
int analrecebido; 

void setup() {
digitalWrite(motdianteiro1IN1 ,OUTPUT);
digitalWrite(motdianteiro2IN2 ,OUTPUT);
digitalWrite(mottraseiro1IN3 ,OUTPUT);
digitalWrite(mottraseiro2IN4 ,OUTPUT);
Serial.begin(9600);
analogWrite(analrecebido, INPUT);
}

void loop() {
  if(Serial.available()){
Serial.available();
 analrecebido = Serial.read();
 Serial.println(analrecebido);
  switch (analrecebido){
   case '1':  // SENTIDO HORÁRIO
 digitalWrite(motdianteiro1IN1, HIGH);
 digitalWrite(motdianteiro2IN2, LOW);
 digitalWrite(mottraseiro1IN3, HIGH);
 digitalWrite(mottraseiro2IN4, LOW);
 break;
   case '2':  // SENTIDO ANTI-HORÁRIO
 digitalWrite(motdianteiro1IN1, LOW);
 digitalWrite(motdianteiro2IN2, HIGH);
 digitalWrite(mottraseiro1IN3, LOW);
 digitalWrite(mottraseiro2IN4, HIGH);
 break;
   case '3':  // PONTO MORTO
 digitalWrite(motdianteiro1IN1, LOW);
 digitalWrite(motdianteiro2IN2, LOW);
 digitalWrite(mottraseiro1IN3, LOW);
 digitalWrite(mottraseiro2IN4, LOW);
 break;
   case '4':  // FREIO
 digitalWrite(motdianteiro1IN1, HIGH);
 digitalWrite(motdianteiro2IN2, HIGH);
 digitalWrite(mottraseiro1IN3, HIGH);
 digitalWrite(mottraseiro2IN4, HIGH);
 break;
}
}
}
