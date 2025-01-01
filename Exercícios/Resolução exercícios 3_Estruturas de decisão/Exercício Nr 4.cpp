#include<stdio.h>
#include<stdlib.h>
int main()
{
	float n1, n2, mult, soma, sub;
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n1);
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n2);
			
	if (n1 == n2)
	{
		mult = n1*n2;
		printf("Multiplicacao = %.2f\n", mult);
	}
	
	if (n1 > n2)
	{
		sub = n1 - n2;
		printf("Subtracao = %.2f\n", sub);
	} 
	if (n2 > n1) 
	{
		soma = n1 + n2;
		printf("Soma = %.2f\n", soma);
	}
	
	system("pause");
	return 0;
}
