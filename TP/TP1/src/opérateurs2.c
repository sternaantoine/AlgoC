/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# opérateurs2.c
*/

#include <stdio.h>

//variables
int num1 = 6;
int num2 = 10;
char op = '*';

int main()
{
    

    switch (op)
    {

    case '+':
        printf("%d\n", num1 + num2);
        break;

    case '-':
        printf("%d\n", num1 - num2);
        break;

    case '*':
        printf("%d\n", num1 * num2);
        break;

    case '/':
        printf("%d\n", num1 / num2);
        break;

    case '%':
        printf("%d\n", num1 % num2);
        break;

    case '&':
        printf("%d\n", num1 & num2);
        break;

    case '|':
        printf("%d\n", num1 | num2);
        break;

    case '~':
        printf("%d\n", ~(num2));
        break;

    default:
        printf("Opérateur inconnu");
        break;
    }

    return 0;
}