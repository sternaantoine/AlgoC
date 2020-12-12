/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# calcul.
*/

/* Déclaration des bibliothèques */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct etudiant
{
    char *nom;
    char *prenom;
    char *adresse;
    char *note1;
    char *note2;
};

int main()
{
    char nom[20];
    char prenom[20];
    char adresse[20];
    char note1[3];
    char note2[3];

    struct etudiant Etudiant[5];

    FILE *fichier = NULL;

    fichier = fopen("test.txt", "w");

    for (int i = 0; i < 5; i++)
    {
        printf("Entrez nom %d : ", i + 1);
        scanf("%s", &nom);

        printf("Entrez prenom %d : ", i + 1);
        scanf("%s", &prenom);

        printf("Entrez adresse %d : ", i + 1);
        scanf("%s", &adresse);

        printf("Entrez noteC %d : ", i + 1);
        scanf("%s", &note1);

        printf("Entrez noteSE %d : ", i + 1);
        scanf("%s", &note2);

        struct etudiant e = {nom, prenom, adresse, note1, note2};
        Etudiant[i] = e;
        fprintf(fichier, "%s, %s, %s, %s, %s\n", Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].adresse, Etudiant[i].note1, Etudiant[i].note2); // ériture dans le fichier 
    }
    fclose(fichier); // Fermeture du fichier

    return 0;
}