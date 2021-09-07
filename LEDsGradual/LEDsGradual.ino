int LEDAM=4;
int LEDVM=5;
int LEDVD=6;
int POTEN=A0;
int ACPOTEN=0;

void setup() {
  pinMode (LEDAM, OUTPUT);
  pinMode (LEDVM, OUTPUT);
  pinMode (LEDVD, OUTPUT);
  pinMode (POTEN, INPUT);
}

void loop() {
  ACPOTEN=analogRead(POTEN);

  if (ACPOTEN > 50 ) {digitalWrite(LEDAM, HIGH);}
  if (ACPOTEN > 350 ) {digitalWrite(LEDVM, HIGH);}
  if (ACPOTEN > 900 ) {digitalWrite(LEDVD, HIGH);}
  if (ACPOTEN < 50 ) {digitalWrite(LEDAM, LOW);}
  if (ACPOTEN < 350 ) {digitalWrite(LEDVM, LOW);}
  if (ACPOTEN < 900 ) {digitalWrite(LEDVD, LOW);}
  

}
