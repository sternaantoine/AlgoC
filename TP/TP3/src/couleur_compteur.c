/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# couleur_compteur.c
# Inspiré d'internet, d'ancien code de jscourse de Monsieur John SAMUEL et des slides sur les structures
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    struct Couleur
    {
        int alpha;
        int rouge;
        int vert;
        int bleu;
        int occurrences;
        int doublon;
    };

    struct Couleur couleurs[100];
    srand(time(NULL)); // Génération de nombres aléatoires en fonction de l'heure

    for (int i = 0; i < 100; i++)
    {

        couleurs[i].alpha = rand() % 3; // Pour tester le programme, j'ai mis rand() % 3 pour être sur d'avoir des doublons. Mais en théorie il faut mettre rand() % 256
        couleurs[i].rouge = rand() % 3;
        couleurs[i].vert = rand() % 3;
        couleurs[i].bleu = rand() % 3;
        couleurs[i].doublon = 0;
        couleurs[i].occurrences = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        if (couleurs[i].doublon == 0) // Si pas de doublon
        {
            for (int j = i + 1; j < 100; j++) // On compare chaque ligne de la structure avec toutes les autres pour compter les doublons
            {
                if (couleurs[i].alpha == couleurs[j].alpha &&
                    couleurs[i].rouge == couleurs[j].rouge &&
                    couleurs[i].vert == couleurs[j].vert &&
                    couleurs[i].bleu == couleurs[j].bleu)
                {
                    // Alors cela veut dire qu'il y a un doublon

                    couleurs[j].doublon = 1;   // Doublon vaut maintenant 1
                    couleurs[i].occurrences++; // On ajoute une occurrence
                }
            }

            // Affichage du résultat
            printf("A=0x%x ", couleurs[i].alpha);
            printf("R=0x%x ", couleurs[i].rouge);
            printf("G=0x%x ", couleurs[i].vert);
            printf("B=0x%x ", couleurs[i].bleu);
            printf("occurrences=%d\n", couleurs[i].occurrences);
        }
    }

    return 0;
}
