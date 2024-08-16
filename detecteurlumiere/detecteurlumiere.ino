const int photoPin = A0; // Broche analogique pour la photodiode
const int ledPin = 9; // Broche digitale pour la LED
const int seuilLumiere = 400; // Seuil de luminosité

void setup() {
  pinMode(ledPin, OUTPUT); // Définir la LED comme une sortie
  Serial.begin(9600);
}

void loop() {
  int valeurLumiere = analogRead(photoPin); // Lire la valeur de la photodiode
  Serial.print("Valeur de la lumière : ");
  Serial.println(valeurLumiere); // Afficher la valeur sur le moniteur série

  if (valeurLumiere < seuilLumiere) { // Si la lumière est faible
    digitalWrite(ledPin, HIGH); // Allumer la LED
  } else {
    digitalWrite(ledPin, LOW); // Éteindre la LED
  }

// delay(100); // Attendre 100 millisecondes avant la prochaine lecture
}

