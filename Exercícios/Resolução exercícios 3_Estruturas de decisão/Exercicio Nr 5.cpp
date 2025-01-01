#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float n1, n2;
	int opcao;
	
	printf("Insira o primeiro numero:\n");
	scanf("%f", &n1);
	
	printf("Insira o segundo numero:\n");
	scanf("%f", &n2);
	
	printf("\n1 - \tSomar\n2 -\tSubtrair\n3 -\tMultiplicar\n4 -\tDividir\nEntre com a opcao desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
	case 1:
			printf("Soma = %.2f\n", n1+n2);
			break;
			
	case 2:
			printf("Subtracao = %.2f\n", n1-n2);
			break;
	case 3:
			printf("Multiplicar = %.2f\n", n1*n2);
			break;
	case 4:
			printf("Divisao = %.2f\n", n1/n2);
			break;
	default:
			printf("Opcao invalida.\n");
			break;
	}
	system("pause");
	return 0;
}
