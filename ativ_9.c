#include <stdio.h>
#include <stdlib.h>
int main()
{
	float altura, raio, volume;
	
	printf ("Digite a altura do cilindro: ");
	scanf ("%f", &altura);
	printf ("Digite o raio do cilindro: ");
	scanf ("%f", &raio);
	
	volume = (3.14 * (raio*raio) * altura); 
	
	printf ("\nVolume do cilindro: %.1f", volume);
	
	return 0;
}
