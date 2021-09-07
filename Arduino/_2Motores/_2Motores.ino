int m1=3;
int m2=5;
char b1;
char b2;
char b3;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){

    char m1=Serial.read();
    char m2=Serial.read();
    Serial.println(m1);
    Serial.println(m2);

    if(m1=='f'){
      analogWrite(m1, 1);
      analogWrite(m2, 0);
    if(m1 == 'a' && m2 == 'a'){
      analogWrite(m1, 1);
      delay(10000);
      analogWrite(m1, 0);
      
      analogWrite(m2, 1);
      delay(5000);
      analogWrite(m2, 0);

    if(m1 == 'b' && m2 == 'b'){
      analogWrite(m1, 0);
      analogWrite(m2, 0);
    if(m1 == 'c' && m2 == 'c'){
      analogWrite(m1, 127);
      analogWrite(m2, 127);
      
    }
      
    }
    }
    }
  }


}
