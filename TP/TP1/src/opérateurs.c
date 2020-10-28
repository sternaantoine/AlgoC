#include <stdio.h>

//variable
int a = 16;
int b = 3;

int main()
{
    // Opérateurs arithmétiques
    printf("Opérateurs arithmétiques :\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    // Opérateurs logiques
    printf("Opérateurs logiques :\n");
    printf("!a vaut : %d\n", !a);
    printf("a && b vaut : %d\n", a && b);
    printf("a || b vaut : %d\n", a || b);

    return 0;
}