#include <time.h>
#include <stdlib.h>

void affiche(int tab[], int NB_PIONS)
{
    for (int i = 0; i < NB_PIONS; i++)
    {
        if (i == 0) {
            printf("|");
            printf(" %d ", tab[i]);
            printf("-");
        } else if (i == NB_PIONS - 1)
        {
            printf(" %d ", tab[i]);
            printf("|\n");
        } else
        {
            printf(" %d ", tab[i]);
            printf("-");
        }        
    }
}

void lire(int tab[], int NB_PIONS, int NB_COULEURS)
{
    int number = -1;
    for (int i = 0; i < NB_PIONS; i++)
    {
        do {
            printf("Entrez le nombre de la case %d:", i);
            scanf("%d", &number);
            printf("%d\n", number);
            if (number >= 0 && number <= NB_COULEURS)
            {
                tab[i] = number;
            } 
        } while (number < 0 || number > NB_COULEURS);
        number = -1;
    }
}

int bienplace(int joueur[], int machine[], int nb_pions)
{
    int count;
    for (int i = 0; i < nb_pions; i++)
    {
        if (joueur[i] == machine[i])
        {
            count++;
        }
    }
    return count;
}

int malplace(int joueur[],  int machine[], int nb_pions, int nb_couleurs)
{
    int malplaces = 0;
    int cj = 0;
    int cm = 0;

    for (int i = 0; i < nb_couleurs; i++)
    {
        if (joueur[i] == i)
        {
            cj++;
        }
        if (machine[i] == i)
        {
            cm++;
        }
    }
    malplaces += cj - cm;
    return malplaces;
}

void init(int tab[], int nb_pions, int nb_couleurs)
{
    for (int i = 0; i < nb_pions; i++)
    {
        srand (time(NULL));
        tab[i] = rand() % nb_couleurs;
    }
}