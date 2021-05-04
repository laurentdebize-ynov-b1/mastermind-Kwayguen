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
        
    }
}