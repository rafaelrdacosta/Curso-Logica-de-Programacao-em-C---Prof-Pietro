#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float sal_min, qtd_kw, val_kw, val_fat, desc, val_fatdesc;
	
	printf("Qual valor do salario minimo?\n");
	scanf("%f", &sal_min);
	
	printf("Qual seu consumo em kw?\n");
	scanf("%f", &qtd_kw);
	
	val_kw = sal_min/1000;
	val_fat = val_kw*qtd_kw;
	val_fatdesc = val_fat - (0.15*val_fat);
	
	printf("Valor por Kw = R$ %.2f\n", val_kw);
	printf("Valor fatura mensal = R$ %.2f\n", val_fat);
	printf("Valor fatura mensal com desconto = R$ %.2f\n", val_fatdesc);
	
	system("pause");
	return 0;
}
