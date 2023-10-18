#include <stdio.h>

int main() 
{
	int matriz[6][5]={0};
	int i,j;
	int fila,columna,valor;
	
	while (fila!=0)
	{
		printf ("ingrese fila: ");
		scanf ("%d",&fila);
		printf ("ingrese columna: ");
		scanf ("%d",&columna);
		printf ("ingrese el valor de la fila %d y columna %d: ",fila,columna);
		scanf ("%d",&valor);
		
		matriz[fila-1][columna-1]=valor;
	}
	
	printf("filas:\n");
	for (i=0; i<6; i++) 
	{
		for (j=0; j<5; j++) 
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("columnas:\n");
	for (j=0; j<5; j++) 
	{
		for (i=0; i<6; i++) 
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

