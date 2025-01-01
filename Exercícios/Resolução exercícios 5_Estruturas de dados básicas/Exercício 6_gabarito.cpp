#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8], po[8], ne[8];
	int i, j, k;
	j = 0;
	k = 0;
	
	for(i=0;i<8;i++)
	{
		printf("Insira o dado do vet[%d]:\n", i);
		scanf("%d", &vet[i]);
		
		if(vet[i]>0)
		{
			po[j] = vet[i];
			j++;
		}
		
		if(vet[i]<0)
		{
			ne[k] = vet[i];
			k++;
		}
	}
	
	printf("\nVetor de positivos:\n");
	for(i=0;i<j;i++)
	{
		printf("%d ", po[i]);
	}
	
	printf("\nVetor de negativos:\n");
	for(i=0;i<k;i++)
	{
		printf("%d ", ne[i]);
	}
}
