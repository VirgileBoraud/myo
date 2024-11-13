#include <Servo.h> 
Servo servo;

// Déclaration des constantes
const int pinEMG = A0;            // Pin sur lequel est connecté le capteur EMG
const int seuil = 700;            // Seuil pour déclencher un changement d'état
const unsigned long tau = 1000;   // Délai d'attente en millisecondes 
int etat = 0;                     // Etat initial, 0 = ouvert, 1 = fermé


void setup() {
  Serial.begin(9600);    //Initilise la communication avec l'arduino
  servo.attach(5);       //Servo connecté pin 5
  servo.write(0);       // position de départ
}

void loop() {
  int valeurEMG = analogRead(pinEMG);     // Lecture de la valeur du capteur EMG
  Serial.println(valeurEMG);              //Permet d'afficher les valeurs si besoin de recalibrer

  if (valeurEMG > seuil ) {     //seuil dépassé ?
    if (etat == 0){             //conditionne le changement d'état
      etat = 1;                 //changement d'état
      servo.write(180);         //met le moteur en position fermé
      delay(tau);               //attente pour ne pas bouclé sur la même contraction
    }
    else if (etat == 1){        //conditionne le changement d'état
      etat = 0;                 //changement d'état
      servo.write(0);           //met le moteur en position ouvert
      delay(tau);               //attente pour ne pas bouclé sur la même contraction
    }
  }

}

