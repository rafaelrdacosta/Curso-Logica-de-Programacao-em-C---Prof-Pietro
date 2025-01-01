#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcSalfinal(float sal_min, float hr_trab){
	
	float vlr_hora, sal_bruto, imposto, sal_final;
	vlr_hora = sal_min/2;
	sal_bruto = vlr_hora * hr_trab;
	imposto = 0.03*sal_bruto;
	sal_final = sal_bruto - imposto;
	return sal_final;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sal_m, hr_t, sal_r;
	
	printf("Insira o número de horas trabalhadas: \n");
	scanf("%f", &hr_t);
	
	printf("Insira valor do salário mínimo: \nR$ ");
	scanf("%f", &sal_m);
	
	sal_r = calcSalfinal (sal_m, hr_t);
	
	printf("Salário a receber: R$ %.2f", sal_r);
	
}
