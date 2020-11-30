/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# tri.c
*/
#include <stdio.h>

int main()
{

    int n, i, entier; // Déclaration des variables

    printf("Choisissez la taille du tableau: ");
    scanf("%d", &n); // Affectation du choix de l'utilisateur à la variable n.

    int tab[n]; // Taille de tableau choisie par l'utilisateur

    for (i = 0; i < n; i++)
    {
        tab[i] = (i + 1) * 3; // Création de tableau de taille n de 3 en 3
    }

    printf("Choisissez l'entier que vous voulez chercher: ");
    scanf("%d", &entier); // Affectation du choix de l'utilisateur à la variable entier.

    for (i = 0; i < n; i++) // Parcours du tableau de taille n
    {
        if (tab[i] == entier) // Si tab[i] vaut l'entier choisit par l'utilisateur
        {
            printf("l'entier %d est present dans le tableau de taille %d", entier, n); 
        }
        }

    return (0); // Valeur de retour du  main()
}