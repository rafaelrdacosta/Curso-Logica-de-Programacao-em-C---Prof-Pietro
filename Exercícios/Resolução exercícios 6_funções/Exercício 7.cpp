#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cambio (float reais, float *dolar, float *euro, float *libra){
	*dolar = reais / 4.00;
	*euro = reais / 4.25;
	*libra = reais / 0.10;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v_reais, v_dol, v_euro, v_lib;
	
	printf("Insira o valor em reais:\n");
	scanf("%f", &v_reais);
	
	cambio (v_reais, &v_dol, &v_euro, &v_lib);
	
	printf("Em dólares: %.2f\n", v_dol);
	printf("Em euros: %.2f\n", v_euro);
	printf("Em ienes: %.2f\n", v_lib);
}
