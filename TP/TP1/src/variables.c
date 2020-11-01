/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# variables.c
*/

#include <stdio.h>

int main()
{

    char c = 'C';
    unsigned char cu = 'C';
    short s = 10;
    unsigned short su = 10;
    int i = 6;
    unsigned int iu = 6;
    long int li = 23L;
    unsigned long int liu = 23L;
    long long int lli = 233LL;
    unsigned long long int lliu = 233LL;
    printf("char %c\n", c);
    printf("unsigned char %hhu\n", cu);
    printf("short %hd\n", s);
    printf("unsigned short %hu\n", su);
    printf("int %d\n", i);
    printf("unsigned int %u\n", iu);
    printf("long int %ld\n", li);
    printf("unsigned long int %lu\n", liu);
    printf("long long int %lld\n", lli);
    printf("unsigned long long int %llu\n", lliu);
    return 0;
}