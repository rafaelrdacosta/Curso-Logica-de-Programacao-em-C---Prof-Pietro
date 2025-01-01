#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int horas;
	float salmin, salbruto, horatrab, imposto, salfinal;
	
	printf("Insira o salario minimo vigente:\n");
	scanf("%f", &salmin);
	
	printf("Insira quantidade de horas trabalhadas:\n");
	scanf("%d", &horas);
	
	horatrab = salmin/2;
	salbruto = horas*horatrab;
	imposto = salbruto*0.03;
	salfinal = salbruto-imposto;
	
	printf("Valor horas trabalhadas: R$ %.2f\n", horatrab);
	printf("Valor salario bruto: R$ %.2f\n", salbruto);
	printf("Valor imposto a ser descontado: R$ %.2f\n", imposto);
	printf("\nValor do salario a receber: R$ %.2f\n\n", salfinal);
	
	system("pause");
	return 0;
}
