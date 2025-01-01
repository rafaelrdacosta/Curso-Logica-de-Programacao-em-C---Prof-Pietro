#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3];
	int i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Insira o dado da posição %d, %d:\n", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i == j)
			printf("%d ", mat[i][j]);
			else
			printf("%d ", 0);
		}
	printf("\n");
	}
}
