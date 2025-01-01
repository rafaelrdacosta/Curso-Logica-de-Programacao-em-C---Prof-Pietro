#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

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
	char n_magra[100], n_baixa[100];
	int i;
	float p_magra, a_baixa;
	float m_idade, soma_idade;
	
	for(i=0;i<3;i++)
	{
		printf("Digite o nome %d: ", i+1);
		scanf("%49[^\n]s", &pes[i].nome);
		
		printf("Insira a idade %d: ", i+1);
		scanf("%d", &pes[i].idade);
		
		printf("Digite o peso %d: ", i+1);
		scanf("%f", &pes[i].peso);
		
		printf("Insira a altura %d: ", i+1);
		scanf("%f", &pes[i].altura);
		fflush(stdin);
	}
	
	for(i=0;i<3;i++)
	
	{
		printf("\nNome pessoa %d: %s.\n", i+1, pes[i].nome);
		
		printf("Idade pessoa %d: %d\n", i+1, pes[i].idade);
				
		printf("Peso pessoa %d: %.2f\n", i+1, pes[i].peso);
				
		printf("Altura pessoa %d: %.2f\n", i+1, pes[i].altura);
		
	}
	
	
	p_magra = pes[0].peso;
	a_baixa = pes[0].altura;
	m_idade = pes[0].idade;
	
	strcpy(n_magra, pes[0].nome);
	strcpy(n_baixa, pes[0].nome);
	for(i=0;i<3;i++){
		if (pes[i].peso < p_magra)
		{
			p_magra = pes[i].peso;
			strcpy(n_magra, pes[i].nome);
		}
		
		if (pes[i].altura < a_baixa)
		{
			a_baixa = pes[i].altura;
			strcpy(n_baixa, pes[i].nome);
		}
	soma_idade = soma_idade + pes[i].idade;
	}
	m_idade = soma_idade/3;
	
	printf("Pessoa mais magra: %s\n", n_magra);
	printf("Pessoa mais baixa: %s\n", n_baixa);	
	printf("Médias das idades: %.2f.\n", m_idade);
	
}
