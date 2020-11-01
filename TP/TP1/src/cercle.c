/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# cercle.c
*/

#include <stdio.h>
#include <math.h>

// variables
float rayon = 6;

int main()
{

    float air = M_PI * (rayon * rayon);
    printf("Air du cercle pour un rayon de %.3f = %.3f \n", rayon, air);
    float perimetre = 2 * M_PI * rayon;
    printf("Perimètre du cercle = %.3f \n", perimetre);
    return 0;
}
