#include <stdio.h>

int main()
{
    char c = '*';
    int hauteur = 7;
    int i, j;

    for (i = 1; i <= hauteur; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%c", c);
        }

        printf("\n");
    }


    return 0;
}
