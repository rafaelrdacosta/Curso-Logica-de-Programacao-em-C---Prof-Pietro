#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, N, res;
	
	printf("Insira um número para calcular sua tabuada: ");
	scanf("%d", &N);

	
	for(i=1; i<=10; i++)
	{
		res = N * i;
		printf("%d x %d = %d\n", N, i, res);
	}
	
	system("pause");
	return 0;
}
