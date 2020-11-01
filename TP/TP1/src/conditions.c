/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# conditions.c
*/
#include <stdio.h>

//variable
int i = 0;

int main()
{
    while (i <= 1000) // Parcours des nombres de 0 à 1000
    {

        if (i % 2 == 0 && i % 15 == 0) // Cas n° 1 ==> Divisible par 2 et 5
        {
            printf("cas numéro 1 : %d\n", i);
        }
        else if (i % 103 == 0 || i % 107 == 0) // Cas n° 2 ==> Divisible par 103 ou 107
        {
            printf("cas numéro 2 : %d\n", i);
        }
        else if ((i % 7 == 0 || i % 5 == 0) && i % 3 != 0) // Cas n° 3 ==> Divisible par 7 ou 5, mais pas par 3 
        {
            printf("cas numéro 3 : %d\n", i);
        }

        i++;
    }
    return 0;
}
