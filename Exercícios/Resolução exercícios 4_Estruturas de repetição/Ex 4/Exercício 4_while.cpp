#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, N, res;
	
	printf("Insira um n�mero para calcular sua tabuada: ");
	scanf("%d", &N);

	i=1;
	while( i<=10 )
	{
		res = N * i;
		printf("%d x %d = %d\n", N, i, res);
		i++;
	}
	
	system("pause");
	return 0;
}
