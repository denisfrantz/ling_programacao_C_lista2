#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_atual, sal_novo;
	
	printf ("Salario mensal atual: ");
	scanf ("%f", &sal_atual);
	
	sal_novo = sal_atual + (sal_atual*0.07); // acr�scimo de 7% ao sal�rio atual
	printf ("\nSalario mensal/2022: %.2f", sal_novo);
	
	sal_novo = sal_atual + (sal_atual*0.06); // acr�scimo de 6% ao sal�rio atual
	printf ("\nSalario mensal/2023: %.2f", sal_novo);
	
	sal_novo = sal_atual + (sal_atual*0.05); // acr�scimo de 5% ao sal�rio atual
	printf ("\nSalario mensal/2023: %.2f", sal_novo);
	
	return 0;
}
