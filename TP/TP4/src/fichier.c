/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# fichier.c
*/
#include "fichier.h"

/* Déclaration des fonctions */

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    FILE *fichier = NULL;

    fichier = fopen(nom_de_fichier, "w"); // Ouverture de fichier avec droit écriture ("w" pour write)

    if (fichier != NULL)
    {
        fputs(message, fichier); // Ecriture du message dans fichier
        fclose(fichier);         // Fermeture du fichier
    }
}

void lire_fichier(char *nom_de_fichier)
{
    FILE *fichier = NULL;
    int caractere = 0;

    fichier = fopen(nom_de_fichier, "r"); // Ouverture de fichier avec droit lecture ("r" pour read)

    if (fichier != NULL)
    {
        while (caractere != EOF) // Tant que ce n'est pas la fin du fichier

        {
            caractere = fgetc(fichier); // Lecture des caractères
            printf("%c", caractere);    // Affichage
        }

        fclose(fichier); // Fermeture du fichier
    }
}

/* Programme principal */

int main()
{
    /* Déclaration des variables */
    char message[100];

    /* Appels des fonctions */

    lire_fichier("test.txt");
    printf("Ecrire dans le fichier: \n");
    scanf("%s", &message); // La variable message est affecté par la saisie utilisateur
    ecrire_dans_fichier("test.txt", message);
    lire_fichier("test.txt");

    return 0;
}
