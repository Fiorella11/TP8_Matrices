#include <stdio.h>

int main() {
	
	int clientes[3][3]={0};
	int i,j,numCliente,codigo;
	int monto,totalDeposito=0,totalExtraccion=0;
	int totalComisiones=0,totalIntereses=0;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("cliente #%d ingrese su numero: ",j+1);
			scanf ("%d",&numCliente);
			if (numCliente==0)
			{
				break;
			}
			printf ("codigo de transaccion (1-4)\n");
			printf ("1. Depósito\n"
					"2. Extracción\n"
					"3. Comisiones deducidas\n"
					"4. Intereses acreditados\n");
			scanf ("%d",&codigo);
			
			if (codigo==1)
			{
				totalDeposito++;
			}
		
			else 
				{
				if (codigo==2)
				{
					totalExtraccion++;
				}
				else 
				{
					if (codigo==3)
					{
						totalComisiones++;
					}
					else 
					{
						if (codigo==4)
						{
							totalIntereses++;
						}
						
					}
				}
				}
			
			while (codigo<1 || codigo>4)
			{
				printf ("codigo invalido, ingrese otro: ");
				scanf ("%d",&codigo);
			}
			printf ("ingrese monto de operacion: ");
			scanf ("%d",&monto);
			
			clientes[i][j]=numCliente;
		}
	}
	
	printf ("N° De Clientes:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",clientes[i][j]);
		}
	}
	printf ("\nTotal Depósitos:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalDeposito);
		}
	}
	printf ("\nTotal Extracciones:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalExtraccion);
		}
	}
	printf ("\nTotal Comisiones:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalComisiones);
		}
	}
	printf ("\nTotal Intereses:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalIntereses);
		}
	}
	
	
	return 0;
}

