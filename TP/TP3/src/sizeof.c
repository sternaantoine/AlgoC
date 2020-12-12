/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# sizeof.c
*/
#include <stdio.h>

int main()
{

    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(int **));
    printf("%lu\n",sizeof(int *));
    printf("%ld\n",sizeof(char *));
    printf("%lu\n",sizeof(char **));
    printf("%lu\n",sizeof(char ***));
    printf("%lu\n",sizeof(float *));
    printf("%lu\n",sizeof(float **));
    printf("%lu\n",sizeof(float ***));
    // Valeur renvoyée est 4 pour tous (4 octets) (config vscode)
    return(0);
}