#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, soma, i;
	
	soma = 0;
	i = 0;
	
	while (i < 3) // estrutura de repeti��o para ler 3 n�meros e atribuir na vari�vel "soma"
	{
		printf ("%do numero: ", i+1);
		scanf ("%d", &num);
		soma = soma + num;
		i++;
	}
	
	printf ("\nSoma dos numeros digitados: %d", soma);
	
	return 0;
}
