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
	
	printf("S�rie num�rica:\n");
	
	i=A+1;
	while(i<B)
	{
		printf("%d ", i);
		i++;
	}
	
	printf("\n");
	system("pause");
	return 0;
}
