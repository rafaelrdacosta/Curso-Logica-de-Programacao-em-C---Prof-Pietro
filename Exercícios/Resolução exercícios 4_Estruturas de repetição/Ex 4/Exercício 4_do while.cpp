#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, N, res;
	
	printf("Insira um número para calcular sua tabuada: ");
	scanf("%d", &N);

	i=1;
	do
	{
		res = N * i;
		printf("%d x %d = %d\n", N, i, res);
		i++;
	} while( i<=10 );
	
	system("pause");
	return 0;
}
