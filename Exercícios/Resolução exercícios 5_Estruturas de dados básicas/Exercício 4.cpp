#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet [9], cont, j;
	
	for(i=0;i<9;i++)
	{
		printf("Insira o dado da posição %d:\n", i+1);
		scanf("%d", &vet[i]);	
	}
	
	for(i=0;i<9;i++)
	{
		cont = 0;
		for(j=1;j<=vet[i];j++)
		{
			if((vet[i]%j)==0)
			{
			cont++;	
			}	
		}
		if(cont == 2)
			{
			printf("%d é primo, posição: %d\n", vet[i], i+1);
			}	
	}
	system("pause");
	return 0;
}
