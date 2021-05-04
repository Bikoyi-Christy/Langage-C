#include <stdio.h>
/* Utilisation de boucle, calcule somme, moyenne, max, min  d'un tableau*/
int main (void)

{
	int i;
	int T[10]={5.0, 5.5, 3.0, 7.0, 8.0, 4.0, 6.0, 9.0, 3.3, 5.0};
	float somme = 0;
	float moyenne = 0;
	float max = 0;
	float min = 10.5;
	
  
	for (i=0; i<10; i++) {
		somme=somme+T[i];
		if (T[i]<min){
			min = T[i];
		}
		if (T[i]>max){
			max = T[i];
		}

	}

	printf ("La somme est %.2f\n", somme);
	moyenne = somme/10; 
	printf ("La moyenne est %.2f\n", moyenne);
	printf (" La note maximal est %.2f\n", max);
	printf(" La note minimal est %.2f\n", min);
	return 0;
}