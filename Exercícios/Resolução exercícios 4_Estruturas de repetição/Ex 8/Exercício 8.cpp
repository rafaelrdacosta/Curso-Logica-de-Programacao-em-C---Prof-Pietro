#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, potencia, i;
	char opcao;
	
	do{
	printf("Insira o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo número: ");
	scanf("%d", &n2);
	
	potencia = (pow (n1, n2));
	
	printf("Potência = %d\n", potencia);
	
	printf("Deseja repetir a operação (s ou n): ");
	scanf(" %c", &opcao);		
	}
	while(opcao == 's' || opcao == 'S');

	system("pause");
	return 0;
	
}

