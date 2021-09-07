int LED=4;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
  if(Serial.available()){

  switch(Serial.read())
  {
    case'a':
    digitalWrite(LED, HIGH);
    break;

    case'b':
    digitalWrite(LED,LOW);
    break;
  }
  } 
  }

