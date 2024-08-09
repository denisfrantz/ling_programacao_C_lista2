#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num);
	
	printf ("\nO quadrado de %d e %d", num, num*num); // cálculo do quadrado do número ao múltiplicá-lo por ele mesmo
	
	return 0;
}
