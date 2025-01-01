#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, i;
	
	
	printf("Insira um número: ");
	scanf("%d", &num);
	
	i=1;
	while(num!=0)
	{
		printf("Insira um número: ");
		scanf("%d", &num);
		
		if(num>0)
		{
			i++;
		}
	} 
	printf("Quantidade de positivos = %d\n", i);
	
	system("pause");
	return 0;
	
}
