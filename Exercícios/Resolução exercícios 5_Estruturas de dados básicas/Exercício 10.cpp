#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[2][2];
	int i, j, maior;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Insira dos dados da posição %d, %d:\n", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	maior = mat[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(mat[i][j]>maior)
			{
				maior = mat[i][j];
			}
		} 
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mat[i][j]=mat[i][j]*maior;
			printf("%d ", mat[i][j]);
		}
	printf("\n");
	}
}
