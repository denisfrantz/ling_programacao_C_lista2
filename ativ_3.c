#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, soma, i;
	
	soma = 0;
	i = 0;
	
	while (i < 2) // estrutura de repeti��o para ler 2 valores e atribuir na var�avel "soma"
	{
		printf ("%do numero: ", i+1);
		scanf ("%d", &num);
		soma = soma + num;
		i++;
	}
	if (soma % 2 == 0) // verifica se a soma � par
	{
		printf ("\nA soma dos numeros digitados e %d e e par", soma);
	}
	else
	{
		printf ("\nA soma dos numeros digitados e %d e e impar", soma);
	}
	
	return 0;
}
