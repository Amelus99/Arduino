int LED=13;
char b1;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
  if(Serial.available()){

  char b1=Serial.read();
  Serial.println(b1);

  if(b1=='9'){
  digitalWrite(LED,1);
  }
  
  if(b1=='b'){
  digitalWrite(LED,0);
  }
}
}
