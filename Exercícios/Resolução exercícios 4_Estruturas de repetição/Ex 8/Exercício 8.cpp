#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, potencia, i;
	char opcao;
	
	do{
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo n�mero: ");
	scanf("%d", &n2);
	
	potencia = (pow (n1, n2));
	
	printf("Pot�ncia = %d\n", potencia);
	
	printf("Deseja repetir a opera��o (s ou n): ");
	scanf(" %c", &opcao);		
	}
	while(opcao == 's' || opcao == 'S');

	system("pause");
	return 0;
	
}

