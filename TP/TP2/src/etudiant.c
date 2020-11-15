#include <stdio.h>

// nom de fichier : etudiant.c
// objectif :  En utilisant seulement des tableaux, écrivez un programme etudiant.c qui déclare, initialise etaffiche les détails de ces cinq étudiants
// auteurs : Antoine Sterna inspiré du code de Pierre KETHAL

int main() {
    int i, j;
    char * tab[6][6];
    char * etudiant[6] = {"numEtu ", "etudiant1 ","etudiant2 ","etudiant3 ","etudiant4 ","etudiant5\n"};
    char * nom[6] = {"nom ","nom1 ","nom2 ","nom3 ","nom4 ","nom5\n"};
    char * prenom[6] = {"prenom ","prenom1 ","prenom2 ","prenom3 ","prenom4 ","prenom5\n"};
    char * adr[6] = {"adr ","adr1 ","adr2 ","adr3 ","adr4 ","adr5\n"};
    char * noteC[6] = {"noteC ","13.8","15.4 ","18 ","14.2 ","17.3\n"};
    char * noteSE[6] = {"nomSE ","15 ","11 ","8.5 ","12.3 ","19.6\n"};

    for (i=0; i<6; i++) //parcourt des tableau nom, prenom ...
        {
            for(j=0; j<6; j++) //parcourt des etudiants
            {
               switch (i)
                {
                    case 0:
                      tab[i][j]= etudiant[j];
                      break;
                    case 1:
                      tab[i][j]= nom[j];
                      break;
                    case 2:
                      tab[i][j]= prenom[j];
                      break;
                    case 3:
                      tab[i][j]= adr[j];
                      break;
                    case 4:
                     tab[i][j]= noteC[j];
                      break;
                    case 5:
                      tab[i][j]= noteSE[j];
                      break;
                }
            }
        }

        for (i=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
               printf("%s", tab[i][j]);
            }
        }
}