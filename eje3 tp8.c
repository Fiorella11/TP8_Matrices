#include <stdio.h>

int main() {
	
	int matriz[5][5]={0};
	int i,j;

	for (i=0; i<5; i++) 
	{
		for (j=0; j<5; j++) 
		{
			printf("ingrese valor para la fila %d y columna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("la matriz es:\n");
	for (i=0; i<5; i++) 
	{
		for (j=0; j<5; j++) 
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

