#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_atual, sal_novo;
	
	printf ("Salario mensal atual: ");
	scanf ("%f", &sal_atual);
	
	sal_novo = sal_atual + (sal_atual*0.07); // acréscimo de 7% ao salário atual
	printf ("\nSalario mensal/2022: %.2f", sal_novo);
	
	sal_novo = sal_atual + (sal_atual*0.06); // acréscimo de 6% ao salário atual
	printf ("\nSalario mensal/2023: %.2f", sal_novo);
	
	sal_novo = sal_atual + (sal_atual*0.05); // acréscimo de 5% ao salário atual
	printf ("\nSalario mensal/2023: %.2f", sal_novo);
	
	return 0;
}
