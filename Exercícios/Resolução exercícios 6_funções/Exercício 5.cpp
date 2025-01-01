#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void calcFatura(float sal_minimo, float qtd_kw, float *vlr_kw, float *vlr_fatura, float *vlr_fatdesc){
	*vlr_kw = sal_minimo/1000;
	*vlr_fatura = *vlr_kw * qtd_kw;
	*vlr_fatdesc = *vlr_fatura * 0.85;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sal_m, qtd_kw, vlr_kw, vlr_f, vlr_fd;
	
	printf("Insira o valor do salário mínimo: \n");
	scanf("%f", &sal_m);
	
	printf("Insira a quantidade de kw gastos: \n");
	scanf("%f", &qtd_kw);
	
	calcFatura (sal_m, qtd_kw, &vlr_kw, &vlr_f, &vlr_fd);
	
	printf("Valor de 1 kw: R$ %.2f\n", vlr_kw);
	printf("Valor a ser pago: R$ %.2f\n", vlr_f);
	printf("Valor da fatura com desconto: R$ %.2f\n", vlr_fd);
}
