#include <stdio.h>

/*    
     Indique une mention en fonction de la note obtenue
ET &&
ou ||
non |
*/
 int note;
 int main(void) 
{
	printf ("entrer note\n");
	scanf ("%d", &note);   
	 if (note >= 0 && note <10)    
	   printf("ajourné\n");
	 else if (note >= 10 && note < 12) 
      printf("passable\n");
	else if (note >= 12 && note <14)
	printf ("assez bien \n");
	else if (note >= 14 && note <16)
	printf ("bien \n");
	else if (note >= 16 && note <18)
	printf ("très bien  \n");
	else if (note >= 18 && note <20)
	printf ("excellent\n");

	return 0; 
}