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
		printf("Insira o dado da posi��o %d:\n", i+1);
		scanf("%d", &vet[i]);
		soma = soma + vet[i];
	}
	media = soma/10;
	
	printf("Somat�rio = %.1f.\n", soma);
	printf("M�dia aritm�tica = %.1f.\n", media);
}
