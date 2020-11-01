/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# sizeof_types.c
*/

// sizeof: la taille de différents types de données (en octet)

#include <stdio.h>

int main()
{

  printf("char %ld\n", sizeof(char));
  printf("unsigned char %ld\n", sizeof(unsigned char));
  printf("short %ld\n", sizeof(short));
  printf("unsigned short %ld\n", sizeof(unsigned short));
  printf("int %ld\n", sizeof(int));
  printf("unsigned int %ld\n", sizeof(unsigned int));
  printf("long int %ld\n", sizeof(long int));
  printf("unsigned long int %ld\n", sizeof(unsigned long int));
  printf("long long int %ld\n", sizeof(long long int));
  printf("unsigned long long int %ld\n", sizeof(unsigned long long int));
  printf("float %ld\n", sizeof(float));
  printf("double %ld\n", sizeof(double));
  printf("long double %ld\n", sizeof(long double));
  return 0;
}