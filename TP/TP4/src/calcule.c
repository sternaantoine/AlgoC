/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# calcul.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

/* Déclaration des fonctions */

int somme(int num1, int num2)
{
    return num1 + num2;
}
int difference(int num1, int num2)
{
    return num1 - num2;
}
float produit(int num1, int num2)
{
    return num1 * num2;
}
float quotient(int num1, int num2)
{
    return num1 / num2;
}
int modulo(int num1, int num2)
{
    return num1 % num2;
}
int et(int num1, int num2)
{
    return num1 && num2;
}
int ou(int num1, int num2)
{
    return num1 || num2;
}
int negation(int num1)
{
    return !num1;
}

/* Programme principal */

int main(int argc, char *argv[])
{

    char *op = argv[1]; // Affectation du premiere paramètre saisi

    /* Convertir les paramètres en int */

    int nb1 = atoi(argv[2]); // Deuxième paramètre
    int nb2 = atoi(argv[3]); // Troisième paramètre

    switch (*op)
    {
    case '+':
        printf("%d+%d = %d\n", nb1, nb2, somme(nb1, nb2));
        break;
    case '-':
        printf("%d-%d = %d\n", nb1, nb2, difference(nb1, nb2));
        break;
    case '*':
        printf("%d*%d = %f\n", nb1, nb2, produit(nb1, nb2));
        break;
    case '/':
        printf("%d/%d = %f\n", nb1, nb2, quotient(nb1, nb2));
        break;
    case '%':
        printf("%d%%%d = %d\n", nb1, nb2, modulo(nb1, nb2));
        break;
    case '&':
        printf("%det%d = %d\n", nb1, nb2, et(nb1, nb2));
        break;
    case '|':
        printf("%dou%d = %d\n", nb1, nb2, ou(nb1, nb2));
        break;
    case '~':
        printf("~%d=%d , ~%d=%d\n", nb1, negation(nb1), nb2, negation(nb2));
        break;
    default:
        printf("arguments absents");
        break;
    }
    return 0;
}
