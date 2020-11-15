#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// nom de fichier : etudiant.c
// objectif :  En utilisant seulement des tableaux, écrivez un programme etudiant.c qui déclare, initialise etaffiche les détails de ces cinq étudiants
// auteurs : Antoine Sterna inspiré du code de Pierre KETHAL & Younes ABOUCHI

int main(){
    int tabi[10];
    float tabf[10];
    int * ptri = &tabi[0];
    float * ptrf = &tabf[0];
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        *(ptri+i) = rand() %100; // affecte une valeur aleatoire
        *(ptrf+i) = rand() %100; // affecte une valeur aleatoire
        if(i%2 ==0){  // Test si indice est divisible par 2
            *(ptri+i) = *(ptri+i)*3;
            *(ptrf+i) = *(ptrf+i)*3;
        }
    }
    printf("tableau int\n");
    for(int i=0;i<10;i++){
        printf("%d : %d \n",i,*(ptri+i));

    }
    printf("tableau float\n");
    for(int i=0;i<10;i++){
        printf("%d : %f \n",i,*(ptrf+i));
    }
}