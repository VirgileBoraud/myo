#include <Servo.h> 

Servo servo; 

void setup() {
  Serial.begin(9600);
  Serial.println("Le programme commence...");
  if (servo.attach(5)) {
    Serial.println("Servo attaché avec succès");
  } else {
    Serial.println("Erreur lors de l'attachement du servo");
  }
}

void loop() {
  Serial.println("Le programme continue");
  servo.write(180);
  Serial.println("Servo position 0° envoyée");
  delay(10000);
  //servo.write(0);
  Serial.println("Servo position 45° envoyée");
  delay(10000);
}


