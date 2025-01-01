#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet [10];
	int i;
	float soma = 0, media;
	
	for(i=0;i<10;i++)
	{
		printf("Insira o dado da posição %d:\n", i+1);
		scanf("%d", &vet[i]);
		soma = soma + vet[i];
	}
	media = soma/10;
	
	printf("Somatório = %.1f.\n", soma);
	printf("Média aritmética = %.1f.\n", media);
}
