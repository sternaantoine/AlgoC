#include <stdio.h>

// nom de fichier : etudiant.c
// objectif :  En utilisant seulement des tableaux, écrivez un programme etudiant.c qui déclare, initialise etaffiche les détails de ces cinq étudiants
// auteurs : Antoine Sterna inspiré du code de Pierre KETHAL & Younes ABOUCHI

struct etudiant {
    char* prenom;
    char* nom;
    char* adresse;
    float noteC;
    float noteSE;
};

int main() {
    struct etudiant tab[5]; //initialisation du tableau d'etudiant
    char * nom[5] = {"DUBOIS ","DUPONT ","LERI ","BRUTE ","CANA"};
    char * prenom[5] = {"Timothe ","Pierre ","Younes ","Lucas","Antoine"};
    char * adr[5] = {"adr1 ","adr2 ","adr3 ","adr4 ","adr5"};
    float noteC[6] = {13.8, 15.4, 18, 14.2, 17.3};
    float noteSE[6] = {15, 11, 8.5, 12.3, 19.6};
    for(int i=0;i<5;i++){
        struct etudiant e = {nom[i],prenom[i],adr[i],noteC[i],noteSE[i]}; // creer etudiant
        tab[i] = e; // ajoute etudiant au tableau
    }
    for(int i=0;i<5;i++){ //affiche chaque etudiant
        printf("%s %s habitant a %s, a eu %f en C et %f en SE \n", tab[i].nom, tab[i].prenom, tab[i].adresse, tab[i].noteC, tab[i].noteSE);
    }
    return 0;
}