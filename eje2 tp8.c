#include <stdio.h>

int main() {

	int matriz[3][3]={0};
	int i,j;
	int fila,columna;
	
	printf ("valores de las columnas impares (1 y 3):\n");
	for (fila=0; fila<3; fila++)
	{
		for (columna=1; columna<=3; columna+=2)
		{
			printf ("ingrese valor para la fila %d y columna %d: ",fila+1,columna);
			scanf ("%d",&matriz[fila][columna-1]);
		}
	}
	
	printf ("valores de la columna par (2):\n");
	for (fila=0; fila<3; fila++) 
	{
		printf("Ingrese un valor para la fila %d, columna 2: ",fila+1);
		scanf("%d",&matriz[fila]);
	}
	
	printf("matriz:\n");
	for (fila=0; fila<3; fila++) 
	{
		for (columna=0; columna<3; columna++) 
		{
			printf("%d ",matriz[fila][columna]);
		}
		printf("\n");
	}
	
	return 0;
}

