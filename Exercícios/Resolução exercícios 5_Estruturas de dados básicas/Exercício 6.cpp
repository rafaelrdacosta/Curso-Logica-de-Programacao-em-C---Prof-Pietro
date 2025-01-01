#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8], i, j, vet2[8];
	
	for(i=0;i<8;i++)
	{
		printf("Insira o dado do vet[%d]:\n", i);
		scanf("%d", &vet[i]);
	}
	printf("Vetor de positivos:\n");
	for(i=0;i<8;i++)
	{
		if(vet[i]>0)
		{
			printf("%d ", vet[i]);
		}
	}
	
	printf("\nVetor de negativos:\n");
	for(i=0;i<8;i++)
	{
		if(vet[i]<0)
		{
			printf("%d ", vet[i]);
		}
	}
}
