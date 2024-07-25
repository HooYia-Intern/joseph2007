const int ledGreen = 13; // Pin pour la LED verte
const int ledOrange = 11; // Pin pour la LED orange
const int ledRed = 12; // Pin pour la LED rouge
void setup() {
  // put your setup code here, to run once:
 pinMode(ledGreen, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledGreen, HIGH);  // Allume la LED verte
  delay(60000);                 // Pause de 3 secondes
  digitalWrite(ledGreen, LOW);   // Éteint la LED verte

  digitalWrite(ledOrange, HIGH); // Allume la LED orange
  delay(5000);                 // Pause de 3 secondes
  digitalWrite(ledOrange, LOW);  // Éteint la LED orange

  digitalWrite(ledRed, HIGH);  // Allume la LED rouge
  delay(30000);                 // Pause de 3 secondes
  digitalWrite(ledRed, LOW);   // Éteint la LED rouge

}
