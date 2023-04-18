#include<LiquidCrystal.h>
#define rs 9
#define e 8
#define d4 7
#define d5 6
#define d6 5
#define d7 4


// ddefinir les port connecter sur Arduino

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
 
void setup() {
  lcd.begin(16, 2);

  // deinir les port de sorti
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // alummage du feu vert uniquement
  
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  lcd.clear();
  lcd.print(" DON'T CROSS");
  lcd.setCursor(0,1);
  lcd.print("THE ROAD..");
  delay(3000);

  // allumage du feu jaunne uniquement
  
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

  lcd.clear();
  lcd.print("RED LIGHT");
  lcd.setCursor(0,1);
  lcd.print("COMING....");
  delay(2000);

  //alumage du feu rouge uniquement
  
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

  lcd.clear();
  lcd.print("ALERT, CARS STOP!!!");
  delay(3000);



  
}
