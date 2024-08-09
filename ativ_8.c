#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, i, menor, maior;
	
	for (i = 0; i < 3; i++) // na primeira leitura, o valor digitado assume a condição de menor e maior
	{
		scanf ("%d", &num);
		if (i == 0)
		{
			menor = num;
			maior = num;
		}
		else // nas leituras seguintes, o valor é comparado com o que está armazenado nas variáveis "menor" e "maior"
		{
			if (num < menor)
			{
				menor = num;
			}
			if (num > maior)
			{
				maior = num;
			}
		}	
	}
	printf ("\nMenor: %d", menor);
	printf ("\nMaior: %d", maior);
	
	return 0;
}
