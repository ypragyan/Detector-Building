#include <LiquidCrystal.h>
 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensorPin1 = A0;   // select the input pin for the potentiometer
int sensorPin2 = A1;   // select the input pin for the potentiometer
int sensorValue1 = 0; 
int sensorValue2 = 0;
 

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("Dr Dre");
}

void loop() { 
  lcd.setCursor(0, 1);
  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);
  lcd.print(sensorValue2);
  Serial.print("Now printing");
  Serial.print("  ");
  Serial.println(sensorValue2);

}

