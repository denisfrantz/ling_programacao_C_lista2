#include <stdio.h>
#include <stdlib.h>
int main()
{
	float tc, tf;
	char opcao;
	
	printf ("a) Graus C ---> Graus F\n");
	printf ("b) Graus F ---> Graus C\n\n");
	scanf ("%c", &opcao);
	system ("cls");
	
	switch (opcao)
	{
		case 'a':
		case 'A':
			printf ("Temperatura em graus C: ");
			scanf ("%f", &tc);
			tf = ((tc * 9/5) + 32);
			printf ("\nTemperatura em graus F: %.1f", tf);
			break;
			
		case 'b':
		case 'B':
			printf ("Temperatura em graus F: ");
			scanf ("%f", &tf);
			tc = ((tf - 32) * 5/9);
			printf ("\nTemperatura em graus C: %.1f", tc);
	}
	
	return 0;
}
