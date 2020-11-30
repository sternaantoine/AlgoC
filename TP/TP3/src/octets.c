/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# octets.c
*/ 
#include <stdio.h>

int main()
{
    printf("%lu \n", sizeof(int *));
    printf("%lu \n", sizeof(int **));
    printf("%lu \n", sizeof(char *));
    printf("%lu \n", sizeof(char **));
    printf("%lu \n", sizeof(char ***));
    printf("%lu \n", sizeof(float *));
    printf("%lu \n", sizeof(float **));
    printf("%lu \n", sizeof(float ***));
    return 0;
}
