#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcLucro (float preco_fab, float perc_lucro){
	return perc_lucro/100*preco_fab;
}

float calcImposto (float preco_fab, float perc_imposto){
	return perc_imposto/100*preco_fab;
}

float calcPrecofinal (float preco_fab, float vlr_lucro, float vlr_imposto){
	return preco_fab + vlr_lucro + vlr_imposto;
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float prc_fab, perc_l, perc_i, vlr_l, vlr_i, prc_final;
	
	printf("Insira o preço de fábrica: \n");
	scanf("%f", &prc_fab);
	
	printf("Insira a porcetangem de lucro do distribuidor: \n");
	scanf("%f", &perc_l);
	
	printf("Insira a porcetangem de impostos: \n");
	scanf("%f", &perc_i);
	
	vlr_l = calcLucro (prc_fab, perc_l);
	vlr_i = calcImposto (prc_fab, perc_i);
	prc_final = calcPrecofinal (prc_fab, vlr_l, vlr_i);
		
	printf("Lucro do distribuidor: R$ %.2f\n", vlr_l);
	printf("Valor de Impostos: R$ %.2f\n", vlr_i);
	printf("Preço final do veículo: R$ %.2f\n", prc_final);
}
