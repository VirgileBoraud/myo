#include <Servo.h> 
Servo servo;

// Déclaration des constantes
const int pinEMG = A0;      // Pin sur lequel est connecté le capteur EMG
const int seuil = 700;      // Seuil pour déclencher un changement d'état
int etat =0;                // Etat initial, 0 = ouvert, 1 = fermé


void setup() {
  Serial.begin(9600);     // Initialise la communication avec l'arduino
  servo.attach(5);        // servo connecté pin 5
  servo.write(0);         // position de départ
}

void loop() {
  int valeurEMG = analogRead(pinEMG);     // Lecture de la valeur du capteur EMG
  Serial.println(valeurEMG);              //Permet d'afficher les valeurs si besoin de recalibrer

  while(valeurEMG > seuil){           // Tant que le seuil est dépassé
    servo.write(180);                 // met le moteur en position fermé
    etat=1;                           // changement d'état
    valeurEMG = analogRead(pinEMG);   // nouvelle mesure de l'emg
  }
  etat=0;           //changement d'état
  servo.write(0);   // position ouvert
}

