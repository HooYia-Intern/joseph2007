const int ledPin= 13;//digital pin pour la led
const int waterSensorPin= A0;// analogie pin pour le sensor water 
const int seuilEauBasse=100;//seuil de declenclenchement de la led
void setup() {
  // put your setup code here, to run once:
   pinMode(ledPin,OUTPUT);// Definir la led comme une sortie
   Serial.begin(9600);// demarrer la commmunication serie
}

void loop() {
  // put your main code here, to run repeatedly:
  int valeurEau= analogRead(waterSensorPin);// lire la valeur du capteur d'eau
  Serial.print("valeur du capteur d'eau:");
  Serial.println(valeurEau);//afficher la valeur du capteur sur le moniteur serie
  if(valeurEau < seuilEauBasse){// si le niveau d'eau est bas 
    digitalWrite(ledPin,HIGH);//allumer la led
    }
  else{
     digitalWrite(ledPin,LOW);// eteindre la led
    }
  delay(1000);// attendre  1 secondes avant la prochaine lecture
}
