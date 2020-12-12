/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# fichier.h
*/

#include <stdio.h>
#include <stdlib.h>

int factorielle(int n)
{

    if (n <= 1) // Si n vaut 1 ou 0 alors factorielle de n vaut 1.
    {
        return 1;
    }

    return (factorielle(n - 1) * n); // Car n! = (n-1!) * n ; exemple: 3! = 2! * 3 = 6
}

int main(int argc, char *argv[])
{
    /* Pour saisir le nombre depuis l'invite de commande */

    int num = atoi(argv[1]); // num prend la valeur du premier argument converti en int grace à atoi
    printf("%d! = %d", num, factorielle(num));

    /* Pour afficher les n premiers termes 
    int nbr,i;
    printf("Saisissez le nombres de termes :");
    scanf("%d", &nbr);
    for (i = 0; i < nbr; i++)
    {
        printf("%d! = %d\n", i, factorielle(i));
    } */

    return 0;
}