#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_bruto, sal_liquido; 
	int dias;
	
	printf ("Dias trabalhados: ");
	scanf ("%d", &dias);
	
	sal_bruto = (dias*20); // c�lculo do sal�rio bruto
	sal_liquido = ((dias*20) - (dias*20*0.08)); // c�lculo do sal�rio l�quido, j� incluso o desconto do IR
	
	printf ("\nSalario bruto: R$ %.2f", sal_bruto);
	printf ("\nDesconto do IR: R$ %.2f", sal_bruto - sal_liquido);
	printf ("\nSalario liquido: R$ %.2f", sal_liquido);
	
	return 0;
}
