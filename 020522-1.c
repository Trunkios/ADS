#include <stdio.h>
#include <string.h>
#include <ctype.h>

main ()
{
	int i;
	char frase[40], convertido;
	
	printf ("Digite uma frase: ");
	fflush (stdin);
	gets (frase);
	printf ("Frase em Maiusculo: ");
	 while (frase[i])
  {
    convertido=frase[i];
    putchar (toupper(convertido));
    i++;
  }
  i=0;
printf ("\nFrase em Minisculo: ");
	 while (frase[i])
  {
    convertido=frase[i];
    putchar (tolower(convertido));
    i++;
  }  
	
}
