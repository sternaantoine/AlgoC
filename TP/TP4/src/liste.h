typedef struct Couleur{
	int R;
	int G;
	int B;
}couleur;

typedef struct liste_couleurs {
	struct liste_couleurs *previous;
	int current;
	struct liste_couleurs *next;
}liste_couleurs;

typedef struct begin_end
{
	liste_couleurs *first;
	liste_couleurs *last;
}begin_end;

void init(begin_end* l);

void parcours(begin_end *l);

void insertion(int val, begin_end *l);

int concatenate(int a, int b);
