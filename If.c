#include <stdio.h>

/*    
     Indique si un solde est débiteur   
     ou créditeur 

ET &&
ou ||
non |
*/
 int solde;
 int main(void) 
{
	printf ("entrer solde\n");
	scanf ("%d", &solde);   
	 if (solde < 10)    
	   printf("solde inférieur à 10\n");
	 else if (solde >= 10 && solde < 100) 
      printf("solde =%d\n", solde);
	else 
	printf ("solde supérieur a 100\n");
	return 0; 
}