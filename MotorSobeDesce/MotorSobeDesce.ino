int controle=11;
int A=0;


void setup() {
  Serial.begin(9600);
  pinMode(controle, OUTPUT);
}

void loop() {
  
  for (A=0; A<256; A++);{
  analogWrite(controle, A);
  Serial.println(A);
  delay(50); 
  
  }
  for (A=255; A>=0; A--);{
  analogWrite(controle, A);
  Serial.println(A);  
  delay(50);
  }


}
