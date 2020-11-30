/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# grand_petit.c
*/ 
#include <stdio.h>

int main()
{

    // Déclaration des variables
    int tableau[100]; 
    int compteur = 0;

    for (compteur = 0; compteur < 100; compteur++) // Création du tableau de 100 entiers
    {

         tableau[compteur] = compteur + 1; // de 1 à 100
        
    }

    // Déclaration des variables min et max
    int min = tableau[0];
    int max = min;

    for (compteur = 0; compteur < 100 ; compteur++) // Parcours du tableau de 100 entiers (de 1 à 100)
    {

        if (tableau[compteur] > max)
        {

            max = tableau[compteur]; // Affectation de tableau[compteur] à la variable max si tableau[compteur] > max
        }

        if (tableau[compteur] < min) 
        {

            min = tableau[compteur]; // Affectation de tableau[compteur] à la variable min si tableau[compteur] < min
        }
    }

    printf("Valeur max = %d et valeur min = %d", max, min); // Affichage du minimum et du maximum.
    return 0;
}
