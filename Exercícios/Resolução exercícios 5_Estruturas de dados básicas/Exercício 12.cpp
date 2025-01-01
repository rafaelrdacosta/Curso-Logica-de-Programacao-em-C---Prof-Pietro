#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][5], vet[3];
	int i, j;
	
	
	for(i=0;i<3;i++)
	{
		vet[i] = 0;
		for(j=0;j<5;j++)
		{
			printf("Insira o dado da posição %d, %d:\n", i+1, j+1);
			scanf("%d", &mat[i][j]);
			vet[i] = vet[i] +  mat[i][j];
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<5;j++)
		{
			
			mat[i][j] = vet[i]*mat [i][j];
			printf("%d ", mat[i][j]);
		}
	printf("\n");
	}
}
