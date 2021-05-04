#include <stdio.h>
/* 
	Créer un programme qui permet d'afficher le résultat de calcul de deux entiers positif
*/

int main(void){
int a, b, S;
int choix;
	printf("1.Choissisez 1 si vous souhaitez additioner\n");
	printf("2.Choissisez 2 si vous souhaitez soustraire\n");
	printf("3.Choissisez 3 si vous souhaitez multiplier\n");
	printf("4.Choissisez 4 si vous souhaitez diviser\n");
	printf("5.Quitter le programme\n");
	printf(" votre choix :\n "); 


	
scanf("%d", &choix);
			
		switch(choix) {
		case 1: {
			printf("Entrer a\n");
		   scanf("%d", &a);
			printf("Entrer b\n");
		   scanf("%d", &b); S=a+b;
  			printf("La somme est : %d\n",S);
			break;
		}       
		case 2: {
        	printf("Entrer a\n");
		   scanf("%d", &a);
			printf("Entrer b\n");
		   scanf("%d", &b); S=a-b;
  			printf("La différence est : %d\n",S);
			break;
		}
		case 3 : {
			printf("Entrer a\n");
		   scanf("%d", &a);
			printf("Entrer b\n");
		   scanf("%d", &b); S=a*b;
  			printf("le résultat de la multiplication est : %d\n",S);
			break;
		}

		case 4 : {
			printf("Entrer a\n");
		   scanf("%d", &a);
			printf("Entrer b\n");
		   scanf("%d", &b); S=a/b;
  			printf("le résultat de la division est : %d\n",S);
			break;
		}

		case 5 : { 
					break;
				 }

		default: {
			printf ("commande invalide!\n");
			break;
		}
	}
	return 0;
}