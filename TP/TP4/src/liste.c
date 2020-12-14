/*
# Antoine STERNA - 2020
# <antoine.sterna@cpe.fr>
# calcul.c
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste.h"

void init(begin_end* l){
	l->first = NULL;
	l->last = NULL;
}

void parcours(begin_end *l)
{
   liste_couleurs *color = l->first;
   while(color)
   {
     
	 printf("%d\n", color->current);
     color = color->next;
   }
}

void insertion(int val, begin_end *l)
{
   liste_couleurs *nouvo = malloc(sizeof(liste_couleurs));
   if(!nouvo) exit(EXIT_FAILURE);
   nouvo->current = val;
   nouvo->previous = l->last;
   nouvo->next = NULL;
   if(l->last) l->last->next = nouvo;
   else l->first = nouvo;
   l->last = nouvo;        
}

int concatenate(int a, int b) {
    unsigned pow = 10;
    while(a >= pow)
        pow *= 10;
    return a * pow + b;        
}

int main(){
	begin_end *list = malloc(sizeof(begin_end));
	
	for(int i = 0; i<10; i++){
		couleur c;
		c.R = rand()%256;
		c.G = rand()%256;
		c.B = rand()%256;
		int a = concatenate(c.R, c.G);
		int b = concatenate(a, c.B);
		insertion(abs(b), list);
	}
	
	parcours(list);	
	
	return 0;
}


