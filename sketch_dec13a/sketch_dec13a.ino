int Led=13;

void setup() {
pinMode(Led, OUTPUT);

}

void loop() {
  digitalWrite(Led, HIGH);
  delay(5000);
  digitalWrite(Led, LOW);
  delay(5000);


}
