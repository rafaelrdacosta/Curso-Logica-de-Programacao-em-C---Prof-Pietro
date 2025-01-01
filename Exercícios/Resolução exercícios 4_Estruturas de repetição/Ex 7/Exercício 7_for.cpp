#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, soma;
	soma=0;
	
	printf("Insira um número: ");
	scanf("%d", &num);
	

	for(i=1; num!=0; i++)
	{
		printf("Insira um número: ");
		scanf("%d", &num);
		
		if(num >=0)
		{
			soma = soma + 1;
		}
	} 
	printf("Quantidade de positivos = %d\n", soma);
	
	system("pause");
	return 0;
	
}
