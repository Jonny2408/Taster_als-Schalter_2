
#include <OneButton.h>

#define LED 2   //LED an Pin 2
#define Taster 8  //Pulldown

boolean statusLED;

OneButton taster(Taster, false);





void setup()
{
  pinMode(2, OUTPUT);  //LED an Pin 2

  taster.attachClick(Funktion_Taster);  // Wenn das Programm ein Signal am Taster Eingang wahrnimmt, springt er zu der Funktion
}

void loop()
{
  taster.tick();  //Abfrage des Tasters


  delay(10);

digitalWrite(LED, statusLED);  //Status des LED Merkers/der LED Status ins digitalWrite einfügen und ausgeben
}

void Funktion_Taster()

{
  statusLED = !statusLED;   //Invertierung der statusLED   
}
