#include<stdio.h>
#include<stdlib.h>
int main(){
	float precoi, precof, percl, perci, imposto, lucro;
	
	printf("Insira o preco de fabrica do carro:\n");
	scanf("%f", &precoi);
	
	printf("Insira o percentual de lucro do distribuidor:\n");
	scanf("%f", &percl);
	
	printf("Insira o percentual de imposto incidente:\n");
	scanf("%f", &perci);
	
	lucro = precoi*percl/100;
	
	imposto = precoi*perci/100;
	
	precof = precoi + imposto + lucro;
	
	printf("Valor do lucro do distribuidor: R$ %.2f\n", lucro);
	printf("Valor pago em impostos: R$ %.2f\n", imposto);
	printf("Valor final do veiculo: R$ %.2f\n", precof);
	
	system("pause");
	return 0;
}
