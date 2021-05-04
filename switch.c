#include <stdio.h>
/* Interface visuel  */
int main(void){
int choix;
	printf("1.Afficher bonjour\n");
	printf("2.Afficher bonsoir\n");
	printf("3.Afficher au revoir\n");
	printf(" votre choix :\n "); 
	
scanf("%d", &choix);


	switch(choix) {
		case 1: {
			printf("Bonjour\n");
			break;
		}       
		case 2: {
        	printf("Bonsoir\n");
			break;
		}
		case 3 : {
			printf("au revoir\n");
			break;
		}
		default: {
			printf ("commande invalide!\n");
			break;
		}
	}
	return 0;
}