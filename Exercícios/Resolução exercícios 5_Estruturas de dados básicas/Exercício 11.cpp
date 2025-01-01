#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3];
	int i, j, X, achou, lin,col;
	achou = 0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Insira o dado da posição %d, %d:\n", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nInsira a chave de busca: \n");
	scanf("%d", &X);
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][j] == X)
			{
			achou = 1;
			lin = i;
			col = j;
			break;	
			}
			
		} if(achou == 1)
			break;	
	}
	if(achou == 1)
		printf("Número %d encontrado na posição: mat[%d][%d]\n", X, lin+1, col+1);	
		
	else
		printf("Chave não encontrada.\n");
			
	
}
