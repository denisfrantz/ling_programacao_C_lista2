#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, soma, i;
	
	soma = 0;
	i = 0;
	
	while (i < 3) // estrutura de repetição para ler 3 números e atribuir na variável "soma"
	{
		printf ("%do numero: ", i+1);
		scanf ("%d", &num);
		soma = soma + num;
		i++;
	}
	
	printf ("\nSoma dos numeros digitados: %d", soma);
	
	return 0;
}
