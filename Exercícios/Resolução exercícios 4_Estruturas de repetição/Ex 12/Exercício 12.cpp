#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i, cont;
	
	printf("Insira um n�mero: ");
	scanf("%d", &N);

	cont = 0;
	
	for(i=1; i<=N; i++){
		if ((N % i == 0)){
			cont++;
		}
		
	} if (cont == 2){
		printf("%d � primo.\n", N);
	} else {
		printf("%d n�o � primo.\n", N);	
		
	}
	
	system("pause");
	return 0;
	
	}
