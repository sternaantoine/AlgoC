/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# bits.c
*/

#include <stdio.h>
#include <stdlib.h>

//variables
int d;

int bit(int d)
{
    // ecrire int masque = 524296 fonctionne également
    int masque = 0b10000000000000010000; // Masque avec 4ème bit et 20 ème bit de gauche = 1
    if ((d & masque) == masque) // Comparaison entre le résultat de l'opération & et le masque
    {
        return 1;
    }

    return 0;
}

int main(){

    printf("Entrez un nombre \n");
    scanf("%d", &d);
    printf("%d", bit(d));
    return 0;

}