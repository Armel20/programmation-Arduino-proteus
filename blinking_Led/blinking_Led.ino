void setup() {
  // definir les ports
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);

}

void loop() {
  // ecriture du code principal
digitalWrite(13, HIGH); //alummer le led blue
digitalWrite(12, LOW); //etiendre le led rouge
delay(500); // attendre demi seconde

digitalWrite(12, HIGH); // eteindre le led blue
digitalWrite(13, LOW); //alummer le led
delay(500); // attendre demi seconde
}
