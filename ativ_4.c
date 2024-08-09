#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num, soma;
	int i;
	
	soma = 0;
	i = 0;
	
	while (i < 2) // estrutura de repetição para ler 2 valores em ponto flutuante e atribuir na varíavel "soma"
	{
		printf ("%do numero: ", i+1);
		scanf ("%f", &num);
		soma = soma + num;
		i++;
	}
	
	printf ("\nSoma dos numeros digitados: %.1f", soma);
	
	return 0;
}
