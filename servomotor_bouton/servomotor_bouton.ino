#include <Servo.h> 

const int servopin = 8; // Broche du servomoteur
const int boutonPin = 2; // Broche du bouton poussoir

Servo monServo; // Déclaration de l'objet Servo

int angle = 0; // Variable pour stocker l'angle actuel du servo
bool boutonPresse = false; // Variable pour suivre l'état du bouton

void setup() {
  Serial.begin(9600);
  monServo.attach(servopin); // Connecte le servomoteur à la broche 8
  pinMode(boutonPin, INPUT); // Configure le bouton comme une entrée
}

void loop() {
  if (digitalRead(boutonPin) == HIGH) { // Si le bouton est pressé
    if (!boutonPresse) { // Si le bouton vient d'être pressé
      boutonPresse = true; // Met à jour l'état du bouton
      Serial.println("Bouton pressé");
    }

    if (angle <= 180) { // Si le servo n'est pas déjà à 180 degrés
      angle += 1; // Incrémente l'angle
      monServo.write(angle); // Déplace le servomoteur à l'angle actuel
      Serial.println(angle); // Affiche la valeur 
      delay(100); // Attend 100 millisecondes avant la prochaine itération
    } else {
      angle = 0; // Réinitialise l'angle à 0
      monServo.write(angle); // Déplace le servomoteur à l'angle 0
      Serial.println("Servo désactivé");
    }
  } 
  else { // Si le bouton est relâché
    if (boutonPresse) { // Si le bouton était précédemment pressé
        boutonPresse = false; // Met à jour l'état du bouton
        monServo.write(0);
        Serial.println("Bouton relâché");
      
    }
  }
}

