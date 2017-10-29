#include "Bouton.h"

#include "Led.h"

#include "Son.h"

Bouton monBouton1;

Led maLed1;

Son monBuzzer1;

void setup()
{

}


void loop()
{
  if (monBouton1.estTenuAppuye()) {
    maLed1.allume();
    for ( int compteur = 150; compteur <= 1800; compteur++) {
      monBuzzer1.sonne(compteur);
      attendre(5);
      monBuzzer1.arreteDeSonner();
    }
    for ( int compteur = 1800; compteur >= 150; compteur--) {
      monBuzzer1.sonne(compteur);
      attendre(5);
      monBuzzer1.arreteDeSonner();
    }
    maLed1.eteint();

  }

}
