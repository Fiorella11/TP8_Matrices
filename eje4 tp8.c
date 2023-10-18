#include <stdio.h>

int main() {
	
	int matriz[3][3]={0};
	int i,j;
	int aux=9;
	
	for (i=0; i<3; i++) 
	{
		for (j=0; j<3; j++) 
		{
			printf("ingrese valor para la fila %d y columna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0; i<aux-1; i++)
	{
		for(j=i+1; j<aux; j++ )
		{
			if (matriz[i/3][i%3]>matriz[j/3][j%3]) 
			{
				int temp=matriz[i/3][i%3];
				matriz[i/3][i%3]=matriz[j/3][j%3];
				matriz[j/3][j%3]=temp;
			}
		}
	}
	
	printf("la matriz es:\n");
		for (i=0; i<3; i++) 
		{
			for (j=0; j<3; j++) 
			{
				printf("%d ",matriz[i][j]);
			}
			printf("\n");
		}
		
	
	return 0;
}

