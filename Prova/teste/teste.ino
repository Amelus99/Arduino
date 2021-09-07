#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#include <Thermistor.h>

Thermistor temp(0);

void setup() {
      Serial.begin(9600);
      lcd.begin(16, 2);
      
}

void loop() {
      int temperature = temp.getTemp();
      Serial.print("Temperatura: ");
      Serial.print(temperature);
      Serial.println("ºC");
      delay(100);
      
      lcd.print(temperature);
      lcd.println("C");
      lcd.setCursor(0,0);
      delay(100);
      
  
}
