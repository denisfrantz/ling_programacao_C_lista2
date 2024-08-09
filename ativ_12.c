#include <stdio.h>
#include <stdlib.h>
# define CUSTO_FIXO 1.15 // definição da constante do custo de uma chamada de 3 minutos
int main()
{
	int tempo_chamada; 
	float custo_extra;
	
	printf ("Duracao da chamada (em minutos): ");
	scanf ("%d", &tempo_chamada);

	custo_extra = ((tempo_chamada - 3) * 0.26); // cada minuto adicional, possui um acréscimo de R$ 0,26 ao custo da chamada
	printf ("\nCusto da chamada: R$ %.2f", CUSTO_FIXO + custo_extra);
	
	return 0;
}

