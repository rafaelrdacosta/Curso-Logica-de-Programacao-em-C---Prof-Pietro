#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i, num, j, fatorial;
	
	printf("Informe quantos n�meros que calcular o fatorial: \n");
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		
		printf("Insira o n�mero para calcular o fatorial:\n");
		scanf("%d", &num);
		
		fatorial = 1;
		for (j=1; j<=num; j++)
		{
			fatorial = fatorial * j;
			
		}
		printf("O fatorial de %d � %d.\n", num, fatorial);
	}
	






	system("pause");
	return 0;	
	}
