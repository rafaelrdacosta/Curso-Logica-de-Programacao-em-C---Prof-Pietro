#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 50

struct pessoas{
	char nome [TAM];
	int idade;
	float peso;
	float altura;
};

typedef struct pessoas pessoas;

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	pessoas pes[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Digite o nome %d: ", i+1);
		scanf("%49[^\n]s", &pes[i].nome);
		
		printf("Insira a idade %d: ", i+1);
		scanf("%d", &pes[i].idade);
				
		printf("Digite o peso %d: ", i+1);
		scanf("%f", &pes[i].peso);
		
		printf("Digite a altura %d: ", i+1);
		scanf("%f", &pes[i].altura);
		fflush(stdin);
	}
	
	printf("Nome da primeira pessoa: %s\n", pes[0].nome);
	printf("Idade da primeira pessoa: %d\n", pes[0].idade);
	
	printf("Peso da última pessoa: %.2f\n", pes[2].peso);
	printf("Altura da última pessoa: %.2f\n", pes[2].altura);
}
