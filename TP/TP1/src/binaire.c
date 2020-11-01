/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# binaire.c
*/

#include <stdio.h>  


int main(){
  
  int  nombre, i, tab[10];  //La taille du tableau détermine jusqu'à combien on peut compter (ici 2^^10 soit de 0 à 1023)
  
  printf("Entrez le nombre à convertir: ");  
  scanf("%d",&nombre);  
  
  for(i=0; nombre > 0; i++)  // Ecriture des 0 et 1 dans le tableau tant que nombre > 0
  {  
    tab[i] = nombre % 2;  
    nombre /= 2;  
  } 
  
  printf("\nLe nombre binaire est = ");
  
  for(i -= 1; i >= 0; i--)  // Itération du tableau dans le sens inverse (tab[i-1] vers tab[0]) 
  {  
    printf("%d",tab[i]);  
  }  
  
  return 0;
}