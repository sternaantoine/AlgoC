/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# puissance.c
*/

#include <stdio.h>


int puissance(int x, int y)
{
    if (y == 0) 
    {
        return(1); // Si la puissance vaut 0 alors le résultat vaudra forcément 1
    }
    return (x * puissance(x,y-1)); // Recursivité pour calculer la puissance n fois
}

int main()
{

    printf("%d", puissance(2, 5)); // Appel de la fonction puissance avec les paramètres x et y
    return 0;
} 