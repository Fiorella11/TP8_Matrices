#include <stdio.h>

int main() {
	
	int matriz[3][6]={0};
	int i,j,k,x,num,temp=0;
	int numero,numeroRepetido=0;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<6; j++)
		{
			printf ("#SORTEO %d ingrese un numero: ",i+1);
			scanf ("%d",&num);
			
			while (num<0 || num>42)
			{
				printf ("numero invalido, ingrese otro: ");
				scanf ("%d",&num);
			}
			
			for (k=0; k<j; k++) 
			{
				while (num==matriz[i][k]) 
				{
					printf("numero repetido. ingrese otro: ");
					scanf("%d",&num);
					k=0;
				}
			}
			matriz[i][j] = num;
			
			if(numero==matriz[i][j])
			{
				numeroRepetido++;
			}
		}
		k++;
	}
	
	printf ("ingrese un numero: ");
	scanf ("%d",&numero);
	printf ("el numero %d se repite %d en los sorteos\n",numero,numeroRepetido);
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<6; j++)
		{
			for (x=0; x<6-1; x++) 
			{
				if (matriz[i][x]>matriz[i][x+1])
				{
					temp=matriz[i][x];
					matriz[i][x]=matriz[i][x+1];
					matriz[i][x+1]=temp;
				}
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("#SORTEO %d\n",i+1);
		for(j=0; j<6; j++)
		{
			printf("numero %d: %d\n",j+1,matriz[i][j]);
		}
	}
	
	return 0;
}

