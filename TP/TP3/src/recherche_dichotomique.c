/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# grand_petit.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /* Déclarations des variables */

    int tab[100];      // Tableau de 100 entiers
    int N = 100;       // Dimension du tableau (100 entiers)
    int MIN;           // Valeur minimum du tableau
    int MAX;           // Valeur maximum du tableau
    int TMP;           // Variable temporaire
    int VAL;           // Valeur à trouver
    int POS;           // Position de la valeur
    int I, J;          // Indice i,j (indices courants)
    int INF, MIL, SUP; // Bornes du tableau 
    srand(time(NULL)); // Génération de nombres aléatoires en fonction de l'heure

    /* Création du tableau de 100 entiers aléatoire entre 0 et 100 */
    for (I = 0; I < N; I++)
    {
        tab[I] = rand() % N;
    }
    printf("Affichage du tableau de 100 entiers aléatoires:\n");
    printf("-----------------------------------------------\n");
    for (I = 0; I < N; I++)
    {
        printf("%d\t", tab[I]);
    }
    printf("FIN\n");

    /* Tri du tableau dans l'ordre croissant */
    MIN = tab[0];
    MAX = MIN;
    for (I = 0; I < N - 1; I++)
    {
        for (J = I + 1; J < N; J++)
        {
            if (tab[I] > tab[J]) // Permutation des valeurs si l'indice est plus grand que l'indice suivant
            {
                TMP = tab[I]; 
                tab[I] = tab[J];
                tab[J] = TMP;
            }
        }
    }
    printf("Affichage du tableau de 100 entiers aléatoires trié:\n");
    printf("-----------------------------------------------\n");
    for (I = 0; I < N; I++)
    {
        printf("%d\t", tab[I]);
    }
    printf("FIN\n");

    /* Recherche si une valeur VAL existe dans le tableau */
    INF=0;
    SUP=N-1;
    POS=-1;
    printf("Indiquez une valeur à rechercher: ");
    scanf("%d",&VAL);
    while ((INF <= SUP) && (POS == -1))
    {
        MIL = (SUP + INF) / 2;
        if (VAL < tab[MIL])
            SUP = MIL - 1;
        else if (VAL > tab[MIL])
            INF = MIL + 1;
        else
            POS = MIL;
    }

    /* Affichage du résultat */
    if (POS == -1)
    {
        printf("La valeur recherchée n'existe pas dans le tableau.\n");
    }
    else
    {
        printf("La valeur recherchée %d se trouve à la position %d. \n",VAL, POS);
    }
    return 0;
}