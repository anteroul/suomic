#include "../suomic.h"
#include <stdio.h>
#include <math.h> /* matematiikkafunktiot */

funktio hypotenusa(desimaali pituus)
{
    /* tulostetaan hypotenuusan pituus kahden desimaalin tarkkuudella */
    printf("Hypotenuusan pituus on %.2f\n", pituus);
}

paaohjelma()
{
    liukuluku k1, k2;

    /* kysytään pituudet käyttäjältä välilyönnillä erotettuina */
    printf("Kirjoita kolmion kateettien pituudet:\n");
    scanf("%f %f", &k1, &k2);

    hypotenusa(sqrt(pow(k1, 2) + pow(k2, 2)));
    palauta 0;
}
