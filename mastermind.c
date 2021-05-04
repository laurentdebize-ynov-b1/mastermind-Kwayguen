#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "fonctions.c"

const int NB_PIONS = 5;
const int NB_COULEURS = 7;

int main() {
    srand(time(NULL));
    int tab[NB_PIONS];
    lire(tab, NB_PIONS, NB_COULEURS);
    affiche(tab, NB_PIONS);
}
