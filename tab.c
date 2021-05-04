#include <stdio.h>
/* créer un tableau dressant 10 valeurs */
 
int T[10] = {5, 5, -3, 7, -1, 0, 8, 7, -5, 4};
int i; 
int main (void)
{ 
	i = 0;
	do 
	{ 
		printf ("T[%d] = %d\n", i, T[i]); 
		i = i+1;
	}
	while (T[i] != -1);
		
		printf ("la position du tableau qui correspond à -1 est ");
		printf ("%d\n",i);

	return 0;
}