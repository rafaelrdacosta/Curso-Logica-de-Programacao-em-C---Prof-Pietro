#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float mat[3][3];
	int i, j;
	float soma, media;
	soma = 0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Insira o dado da posição %d, %d:\n", i+1, j+1);
			scanf("%f", &mat[i][j]);
			soma = soma + mat[i][j];
		}
	}
	
	printf("Soma = %.2f\n", soma);
	printf("Média = %.2f\n", media = soma/9);
}
