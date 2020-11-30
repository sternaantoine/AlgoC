/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# tri.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /* Déclaration des variables */
    int i, j, n, tmp;
    srand(time(NULL)); // Génération de nombres aléatoires en fonction de l'heure

    printf("Choisissez la taille du tableau: ");
    scanf("%d", &n);

    int tab[n]; // Taille de tableau choisie par l'utilisateur

    for (i = 0; i < n; i++)
    {
        tab[i] = rand() % 1000; // Création de tableau de taille n de nombres aléatoires allant possiblement de 0 à 999
    }

    /* Tri du tableau */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++) 
        {
            if (tab[i] > tab[j]) //Permutation si l'indice est plus grand que l'indice suivant
            {
                tmp = tab[i]; // Affectation de tab[i] dans la variable tmp (comme temporaire) pour ne pas écraser la valeur
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    /* Affichage du tableau trié */
    for (i = 0; i < n; i++)
    {
        printf("%d\n", tab[i]);
    }
}
