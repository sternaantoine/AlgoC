/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# boucles.c
*/

#include <stdio.h>

//variables
char c = '*';
char c1 = '#';
int compter;
int i, j, k;

int main()
{
    printf("Choisissez la hauteur du triangle (> 4): ");
    scanf("%d", &compter);
    if (compter < 4)
    {
        printf("Choisissez une hauteur supérieur ou égal à 4");
    }
    else
    {
        for (i = 1; i <= compter; i++) // Parcours des lignes d'indice i
        {
            if (i == compter) //  si l'indice i correspond à la dernière ligne ==> Fermeture du triangle avec des *
            {
                int k = 0;
                while (k < compter)
                {
                    printf("%c", c);
                    k++;
                }
            }
            else
            {
                for (j = 1; j <= i; j++) // Parcours des colonnes
                {
                    if (j == i || j == 1) // Si la colonne vaut le premier indice de la ligne ou le dernier ==> Affichage d'une * sinon affichage d'un #
                    {
                        printf("%c", c);
                    }
                    else
                    {
                        printf("%c", c1);
                    }
                }
            }
            printf("\n"); // Préparation de la ligne suivante
        }
    }
    return 0;
}
