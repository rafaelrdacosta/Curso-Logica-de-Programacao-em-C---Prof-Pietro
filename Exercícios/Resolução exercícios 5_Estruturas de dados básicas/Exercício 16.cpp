#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct dados_produto{
	int codigo;
	char nome [50];
	float valor;
	int qtd;
};

typedef struct dados_produto dados_produto;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	dados_produto dados[3];
	int i, X, achou, lin;
	
	for(i=0;i<3;i++)
	{
		printf("Insira o código do produto %d:\n", i+1);
		scanf("%d", &dados[i].codigo);
		fflush(stdin);
		
		printf("Insira o nome do produto %d:\n", i+1);
		scanf("%49[^\n]s", &dados[i].nome);
		fflush(stdin);
		
		printf("Insira o valor do produto %d:\n", i+1);
		scanf("%f", &dados[i].valor);
		fflush(stdin);
		
		printf("Insira a quantidade do produto %d:\n", i+1);
		scanf("%d", &dados[i].qtd);
		fflush(stdin);
	}
	
	printf("Insira a chave de busca: ");
	scanf("%d", &X);
	achou = 0;
	
	for(i=0;i<3;i++)
	{
		if(dados[i].codigo == X){
			achou = 1;
			lin = i;
		}
	}
	if(achou = 1)
		{
			printf("Nome: %s.\n", dados[lin].nome);
			printf("Valor: %.2f\n", dados[lin].valor);
			printf("Quantidade: %d\n", dados[lin].qtd);
		}
		else{
			printf("\nCódigo não encontrado.\n");
		}
}
