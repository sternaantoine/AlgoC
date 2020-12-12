/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# opérator.c
*/

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


int main()
{

    /* Déclaration des variables */
    char op;
    int nbr1, nbr2;

    /* Affection des variables par la saisie de l'utilisateur */

    printf("Choisissez le premier nombre :");
    scanf("%d", &nbr1);

    printf("Entrez l'operateur : \n");
    getchar();  

    while (op == '\0') // Tant que op est vide 
    {
        op = getchar(); // On assigne le caractère saisi à la varaible op grace à la méthode getchar()
    }

    printf("Choisissez le deuxième nombre :");
    scanf("%d", &nbr2);

    /* Ecriture du switch */

    switch (op)
    {
    case '+':
        printf("%d+%d = %d\n", nbr1, nbr2, somme(nbr1, nbr2));
        break;
    case '-':
        printf("%d-%d = %d\n", nbr1, nbr2, difference(nbr1, nbr2));
        break;
    case '*':
        printf("%d*%d = %.2f\n", nbr1, nbr2, produit(nbr1, nbr2));
        break;
    case '/':
        printf("%d/%d = %f\n", nbr1, nbr2, quotient(nbr1, nbr2));
        break;
    case '%':
        printf("%d%%%d = %d\n", nbr1, nbr2, modulo(nbr1, nbr2));
        break;
    case '&':
        printf("%d et %d = %d\n", nbr1, nbr2, et(nbr1, nbr2));
        break;
    case '|':
        printf("%d ou %d = %d\n", nbr1, nbr2, ou(nbr1, nbr2));
        break;
    case '~':
        printf("~%d=%d , ~%d=%d\n", nbr1, negation(nbr1), nbr2, negation(nbr2));
        break;
    default:
        printf("Opérateur non reconnu.");
        break;
    }
    return 0;
}
