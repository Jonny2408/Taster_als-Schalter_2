
#include <OneButton.h>

#define LED 2   //LED an Pin 2
#define Taster 8  //Pulldown

boolean statusLED = false;

OneButton taster(Taster, false);


byte led[9] = {2, 3, 4, 5, 6, 7, 8, 9};  //array für die Laufleiste

byte ledZustand[6][8] =
{
  {1, 0, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
};




void setup()
{

  taster.attachClick(Funktion_StartStop);  // Wenn das Programm ein Signal am Taster Eingang wahrnimmt, springt er zu der Funktion
  {

    for (byte i = 0; i < 8; i++)
    {
      pinMode(led[i], OUTPUT);
    }
  }
  void loop()
  {
    taster.tick();  //Abfrage des Tasters


    delay(10);

    if (statusLED = 1)
    {

      for (byte i = 0; i < 6; i++) //Zeilen
      {
        delay(150);
        for (byte j = 0; j < 8; j++) //Spalten
        {

          digitalWrite(led[j], ledZustand[i][j]);
        }
      }


    }

    void Funktion_StartStop()

    {
      statusLED = !statusLED;   //Invertierung der statusLED
    }
