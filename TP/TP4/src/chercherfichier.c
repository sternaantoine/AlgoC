/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# cherchefichier.c // réalisé grâce à https://koor.fr/C/
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{

    char *mot_a_trouver = argv[1];
    char *file = argv[2];
    char *p, *eos;

    FILE *fichier = NULL;
    fichier = fopen(file, "a+");

    char word[255];
    int compteur = 0;

    while (fgets(word, sizeof(word), fichier) != NULL)
    {
        p = word;
        while (eos = strchr(p, ' '))
        {
            *eos = 0;
            printf("%s\n", p);
            if (strcmp(mot_a_trouver, p) == 0)
                compteur++; // On compare le mot à trouver
            p += strlen(p) + 1;
        }
        puts(p);
    }

    /* Affichage du résultat */

    printf("Le mot '%s' a été trouvé %d fois", mot_a_trouver, compteur);

    return 0;
}
