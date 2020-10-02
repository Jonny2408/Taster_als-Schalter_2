#include <OneButton.h>

OneButton taster(8, true);

#define LED 2   //LED an Pin 2
#define Taster 8  //Pulldown

boolean statusLED;


void setup()
{
  pinMode(2, OUTPUT);  //LED an Pin 2

  taster.attachClick(Funktion_Taster);
}

void loop()
{
  taster.tick();


  delay(10);
}

void Funktion_Taster()

{
  if (statusLED == 1)
  {
    digitalWrite(LED, LOW);
    statusLED = 0;
  }
  else
  {
    digitalWrite(LED, HIGH);
    statusLED = 1;
  }
}
