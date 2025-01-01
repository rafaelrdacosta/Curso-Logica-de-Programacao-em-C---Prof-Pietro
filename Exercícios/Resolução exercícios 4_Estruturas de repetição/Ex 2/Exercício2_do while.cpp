#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, i;
	
	printf("Insira o valor de A: ");
	scanf("%d", &A);
	
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	
	printf("Série numérica:\n");
	i=A+1;
	do
	{
		printf("%d ", i);
		i++;
	} while(i<B);
	
	printf("\n");
	system("pause");
	return 0;
}
