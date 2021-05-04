#include <stdio.h>
#include <string.h>


int main (void)
{ 
	char a [1024];
	do {
		printf ("----- Menu -----\n");
		printf ("	1. Afficher bonjour\n");
		printf ("	2. Afficher bonsoir\n");
		printf ("	3. Afficher au revoir\n");
		scanf ("%s", a);
	switch (a[0]) {
		case '1' :
			printf ("Bonjour\n");
			break;
		case '2':
			printf ("Bonsoir\n"); 
			break;
		case '3':
			printf ("Au revoir\n");
			break;
		default: 
		break;
	if (strlen(a) > 1 || a[0] < '1' || a [0] > '3' )
		printf ("Commande invalide");
	}
}
while (strlen(a) != 1 && a [0] != '3')   ;
	return 0;
}