#include <stdio.h>

// nom de fichier : etudiant.c
// objectif :  En utilisant seulement des tableaux, écrivez un programme etudiant.c qui déclare, initialise etaffiche les détails de ces cinq étudiants
// auteurs : Antoine Sterna inspiré du code de Pierre KETHAL


int main(){
    char ch = 'a';
	char* pch = &ch;

	short s = 1;
    short* ps = &s;

	int i = 1;
    int* pi= &i;

	long int li = 1;
    long int* pli = &li;

	long long int lli = 1;
    long long int* plli = &lli;

	float f = 1.5;
    float* pf = &f;
	double d= 2.0;
    double* pd= &d;
	long double ld = 2.0;
    long double* pld = &ld;

	printf("pointeur char %c \n",*pch);
    printf("adresse char %p \n",&pch);

	printf("pointeur short %d \n",*ps);
    printf("adresse short %p \n",&ps);

	printf("pointeur int %d \n",*pi);
    printf("adresse int %p \n",*pi);

	printf("pointeur long int %ld \n",*pli);
    printf("adresse long int %p \n",&pli);

	printf("pointeur long long int %lld \n",*plli);
    printf("adresse long long int %p \n",&plli);

	printf("pointeur float %f \n",*pf);
    printf("adresse float %p\n",&pf);

	printf("pointeur double %f \n",*pd);
    printf("adresse double %p \n",&pd);

	printf("pointeur long double %Lf \n",*pld);
    printf("adresse long double %p \n",&pld);

	return 0;
}