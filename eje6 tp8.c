#include <stdio.h>

int main() {
	
	int matriz[10][2]={0};
	int i,j;
	int numSocio,edad,auxSocio,auxEdad;
	
	for (i=0; i<10; i++)
	{
		printf ("ingrese numero de socio: ");
		scanf ("%d",&numSocio);
		printf ("ingrese edad: ");
		scanf ("%d",&edad);	
		
		if (numSocio==0)
		{
		break;	
		}
		matriz[i][0]=numSocio;
		matriz[i][1]=edad;
	}
	for (i=0; i<10-1; i++) 
	{
		for (j=i+1; j<10; j++) 
		{
			if (matriz[i][1]>matriz[j][1]) 
			{
				auxSocio=matriz[i][0];
				auxEdad=matriz[i][1];
				matriz[i][0]=matriz[j][0];
				matriz[i][1]=matriz[j][1];
				matriz[j][0]=auxSocio;
				matriz[j][1]=auxEdad;
			}
		}
	}
	for (i=0; i<10; i++) 
	{
		printf("numero de socio: %d. edad: %d\n",matriz[i][0],matriz[i][1]);
	}
	


	return 0;
}

