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
	
	i=1;
	do
	{
		printf("Insira um número: ");
		scanf("%d", &num);
		i++;
		if(num>=0)
		{
			soma = soma + 1;
		} 
	} while( num!=0 );
	printf("Quantidade de positivos = %d\n", soma);
	
	system("pause");
	return 0;
	
}
