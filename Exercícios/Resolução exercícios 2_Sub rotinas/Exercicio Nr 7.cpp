#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float receita, dol, euro, libra;
	
	printf("Qual valor voce tem disponivel?\n");
	scanf("%f", &receita);
	
	dol = receita/4.0;
	euro = receita/4.25;
	libra = receita/0.10;
	
	printf("Disponivel em dolares = %.2f\n", dol);
	printf("Disponivel em euros = %.2f\n", euro);
	printf("Disponivel em libras = %.2f\n", libra);
	
	system("pause");
	return 0;
}
