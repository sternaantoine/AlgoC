#include <stdio.h>
#include <math.h>
// variables 
float rayon = 6;

int main() {

    float air = M_PI * (rayon * rayon);
    printf("Air du cercle pour un rayon de %.2f = %f \n" ,rayon, air);
    float perimetre = 2 * M_PI * rayon;
    printf("Perimètre du cercle = %.2f \n", perimetre);
    return 0;
}




