#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal, sal_novo, porc;
	int i, ano_atual;
	
	
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	
	sal = 1000.0;
	porc = 1.5/100.0;
	sal_novo = sal + sal*porc;
	
	i=2017; 
	do {
		porc = 2 * porc;
		sal_novo = sal_novo + sal_novo * porc;
		i++;
	} while (i<=ano_atual);
	
	printf("O salário atual é: %.2f.\n", sal_novo);
	
	system("pause");
	return 0;

}

