#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[4][2], i, j;
	
	printf ("Pontos cartesianos (x,y)\n\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	return 0;
}
