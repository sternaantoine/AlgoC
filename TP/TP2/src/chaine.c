/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# chaines.c
*/

#include <stdio.h>
#include <stdlib.h>
//variables
int compteur = 0;



void compter(char *chaine)
{
    while (chaine[compteur] != '\0')
    {
    // *(chaine + compteur)    
        compteur++;
    }
    printf("%d", compteur);
}

void copier(char *chaine2, char *chaine1)
{
    int indice = 0;
    while (chaine1[indice] != '\0')
    {
        chaine2[indice] = chaine1[indice];
        indice++;
    }
}

void concatener(char *chaine1, char *chaine2)
{
    int longueur = 0;

    while (chaine2[longueur] != '\0')
    {

        longueur++;
    }

    int decalage = 0;
    int indice = 0;

    while (chaine1[indice] != '\0')
    {

        chaine2[longueur + decalage] = chaine1[indice]; // Ecire la source à la fin de la chaine de destination
        indice++;                                           // En incrémentant l'indice
        decalage++;                                         // Et le décalage
    }
}

int main()
{

    char dest[] = "Une";
    char source[] = "Chaine";   
    
}