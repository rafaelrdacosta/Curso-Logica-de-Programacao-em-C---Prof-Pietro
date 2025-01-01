#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vet1[10], vet2[10], i, j, inter[20];
	
	for(i=0;i<10;i++)
	{
		printf("Insira o dado vet1[%d]:\n", i);
		scanf("%d", &vet1[i]);	
	}	
	
	for(i=0;i<10;i++)
	{
		printf("Insira o dado vet2[%d]:\n", i);
		scanf("%d", &vet2[i]);
	}
	
	j=0;
	for(i=0;i<10;i++)
	{
		inter[j] = vet1[i];
		inter[j+1] = vet2[i];
		j += 2;
	}
	
	for(i=0;i<20;i++)
	{
		printf("%d ", inter[i]);
	}
		
	}

