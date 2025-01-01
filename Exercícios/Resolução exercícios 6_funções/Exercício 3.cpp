#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcSobraRacao(float pes_racao, float nr_gatos, float qtd_racdia){
	
	float sobra = pes_racao - (nr_gatos*qtd_racdia*5/1000);
	return sobra;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float pes_r, nr_g, qtd_rd, sobra_r;
	
	
	printf("Qual o peso do saco de ração (quilos): \n");
	scanf("%f", &pes_r);
	
	printf("Qual o número de gatos?\n");
	scanf("%f", &nr_g);
	
	printf("Qual o peso da porção diária (gramas)?\n");
	scanf("%f", &qtd_rd);
	
	sobra_r = calcSobraRacao (pes_r, nr_g, qtd_rd);
	
	printf("Após 5 dias, sobrarão: %.1f Kg de ração.\n", sobra_r);
}
