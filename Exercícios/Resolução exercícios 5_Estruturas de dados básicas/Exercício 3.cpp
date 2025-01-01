#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10];
	int i, X, achou, lin;
	achou = 0;
	
	for(i=0;i<10;i++)
		{
			printf("Insira o dado da posição %d:\n", i+1);
			scanf("%d", &vet[i]);
		}
	
	printf("\nInsira a chave de busca:\n");
	scanf("%d", &X);
	
	for(i=0;i<10;i++)
		{
			
			if(vet[i] == X)
				{
					achou = 1;
					break;	
				}
		}
	
	if(achou == 1)
		printf("Chave encontrada na posição: %d.\n", i+1);
	else
		printf("Chave não encontrada.\n");
}
