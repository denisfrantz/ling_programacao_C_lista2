#include <stdio.h>
#include <stdlib.h>
int main()
{
	float ang1, ang2, ang3, i, soma;
	
	i = 0;
	
	printf ("Digite os angulos do triangulo: \n\n");
	scanf ("%f%f%f", &ang1, &ang2, &ang3);
	soma = (ang1 + ang2 + ang3);
	
	if (soma == 180) // verifica a soma dos �ngulos internos, j� que ela precisa ser igual a 180�
	{
		if ((ang1 == 90)||(ang2 == 90)|| (ang3 == 90)) // caso um dos �ngulos seja igual a 90�, o tri�ngulo � ret�ngulo
		{
			printf ("\nO triangulo e retangulo");
		}
		else
		{
			printf ("\nO triangulo nao e retangulo");
		}
	}
	else
	{
		printf ("\nOs valores dos angulos nao formam um triangulo");
	}
	
	
	
	return 0;
}
