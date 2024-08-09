#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, soma;
	
	soma = 0;
	
	// leitura dos 3 números e atribuição dos valores na variável "soma"
	
	printf ("1o numero: ");
	scanf ("%d", &num);
	soma = soma + num;
	
	printf ("2o numero: ");
	scanf ("%d", &num);
	soma = soma + num;
	
	printf ("3o numero: ");
	scanf ("%d", &num);
	soma = soma + num;
	
	printf ("\nSoma dos numeros digitados: %d", soma);	
	
	return 0;
}
