#include<LiquidCrystal.h>
#define rs 9
#define en 8
#define d4 7
#define d5 6
#define d6 5
#define d7 4

// definir les port conncecter sur arduino

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2);
  
  // definir les ports
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);

}

void loop() {
  // ecriture du code principal
  digitalWrite(13, HIGH); //alummer le led blue
  digitalWrite(12, LOW); //etiendre le led rouge
  
  lcd.clear();
  lcd.print("Green led on");
  delay(1000); // attendre demi seconde
  
  digitalWrite(12, HIGH); // eteindre le led blue
  digitalWrite(13, LOW); //alummer le led
   lcd.clear();
  lcd.print("Red led on");
  delay(1000); // attendre demi seconde
}
