void setup()    // début de la fonction setup()
{
    pinMode(13, OUTPUT);  // Initialise la broche 13 comme sortie
    Serial.begin(9600);   // Ouvre le port série à 9600 bauds
    Serial.println("Le programme démarre...");
}               // fin de la fonction setup()

//***** FONCTION LOOP = Boucle sans fin = cœur du programme *****
// la fonction loop() s'exécute sans fin en boucle aussi longtemps que l'Arduino est sous tension

void loop()     // début de la fonction loop()
{
    digitalWrite(13, HIGH);  // Met la broche 13 au niveau haut = allume la LED
    delay(500);              // Pause de 500 ms
    digitalWrite(13, LOW);   // Met la broche 13 au niveau bas = éteint la LED
    delay(500);              // Pause 500 ms
}               // fin de la fonction loop()
