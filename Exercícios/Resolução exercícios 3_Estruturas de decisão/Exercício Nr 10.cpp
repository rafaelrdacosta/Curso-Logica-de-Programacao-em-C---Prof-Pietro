#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1, n2, n3, n4;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d", &n2);
	
	printf("Insira o terceiro numero:\n");
	scanf("%d", &n3);
	
	printf("Insira o quarto numero:\n");
	scanf("%d", &n4);
	
	if (n4 < n1)
	{
		printf("%d - %d - %d - %d.\n", n3, n2, n1, n4);
	}
	
	if (n4 > n1 && n4 < n2)
	{
		printf("%d - %d - %d - %d.\n", n3, n2, n4, n1);
	}
	
	if (n4 > n2 && n4 < n3)
	{
		printf("%d - %d - %d - %d.\n", n3, n4, n2, n1);
	}
	if (n4 > n3)
	{
		printf("%d - %d - %d - %d.\n", n4, n3, n2, n1);
	}
	system("pause");
	return 0;
	
}
