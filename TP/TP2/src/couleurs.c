#include <stdio.h>

// nom de fichier : etudiant.c
// objectif :  En utilisant seulement des tableaux, écrivez un programme etudiant.c qui déclare, initialise etaffiche les détails de ces cinq étudiants
// auteurs : Antoine Sterna inspiré du code de Pierre KETHAL

struct couleur {
    char* rouge;
    char* vert;
    char* bleu;
    char* alpha;
};
int main(){

    struct couleur tab_couleur[10];
    char g[6];
    char v[6];
    char b[6];
    char a[6];
    for(int i=0; i<10;i++){
        printf("definissez la couleur %d \n",i);
        printf("definissez le rouge en hexa\n");
        scanf("%s",&g);
        printf("definissez le vert en hexa\n");
        scanf("%s",&v);
        printf("definissez le bleu en hexa\n");
        scanf("%s",&b);
        printf("definissez le alpha en hexa\n");
        scanf("%s",&a);
        struct couleur e = {g,v,b,a};
        printf("Courleur %d cree : \n -rouge : %s \n -vert : %s \n -bleu : %s \n -alpha : %s\n",i,e.rouge,e.vert,e.bleu,e.alpha);
        tab_couleur[i] = e;
    }
}