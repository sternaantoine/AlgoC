#include <stdio.h>
 
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}
 
int main()
{
  int nbr, i = 0, j;
 
  printf("Entrez le nombre de termes\n");
  scanf("%d", &nbr);
 
  printf("Les %d premiers termes de la série de Fibonacci sont:\n", nbr);
 
  for (j = 1; j <= nbr; j++)
  {
    printf("U%d = %d\n", j - 1, fibonacci(i));
    i++;
  }
 
  return 0;
}