#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vet [5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Insira o dado da posição %d:\n", i+1);
		scanf("%f", &vet[i]);
	}
	
	printf("Conteúdo dividido por 100:\n");
	for(i=0;i<5;i++)
		{
		printf("%.1f\n", vet[i]/100);
		}
}
