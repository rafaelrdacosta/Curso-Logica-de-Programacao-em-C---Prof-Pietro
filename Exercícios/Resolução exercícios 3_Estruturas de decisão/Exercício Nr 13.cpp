#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float n1, n2, n3, soma=0, raiz;
	int opcao;
	
	
	printf("Menu de opcoes:\n");
	printf("1. Somar dois numeros\n");
	printf("2. Raiz quadrada de um numero\n\n");
	
	printf("Digite a opcao desejada:\n");
	scanf("%d", &opcao);
	
	if (opcao == 1)
	{
		printf("Insira o valor do primeiro numero:\n");
		scanf("%f", &n1);
		printf("Insira o valor do segundo numero:\n");
		scanf("%f", &n2);
		soma = n1 +n2;
		printf("Soma = %.1f\n", soma);
	}
	
	if (opcao == 2)
	{
		printf("Insira um numero:\n");
		scanf("%f", &n3);
		raiz = sqrt(n3);
		printf("Raiz quadrada = %.1f", raiz);
	}
	system("pause");
	return 0;
}
