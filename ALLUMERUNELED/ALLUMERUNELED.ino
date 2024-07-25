void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);// Initialise la broche 13 comme sortie
  Serial.begin(9600);// ouvre le port serie a 9600 bauds

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);//met la broche 13 au niveau haut =allume la LED
  delay(50);//pause de 400ms
  digitalWrite(13,LOW);//met la broche 13 au niveau bas = eteint la LED
  delay(50);//pause de 400ms

}
