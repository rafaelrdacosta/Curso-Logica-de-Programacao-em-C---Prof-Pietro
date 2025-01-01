#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float base, altura;
	int op;
	
	printf("Insira o valor da base:\n");
	scanf("%f", &base);
	
	printf("Insira o valor da altura:\n");
	scanf("%f", &altura);
	
	printf("\n0\t-\tPerimetro\n1\t-\tArea\nEscolha a opcao desejada:\n");
	scanf("%d", &op);
	
	switch(op)
	{
	case 0:
		printf("Perimetro = %.2f\n", 2*(base+altura));	
		break;
	
	case 1:
		printf("Area = %.2f\n", base*altura);	
		break;
		
	default:
		printf("Opcao invalida\n");
		break;
	}
	system("pause");
	return 0;
}
