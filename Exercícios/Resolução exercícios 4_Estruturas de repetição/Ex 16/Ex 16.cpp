#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, i, j;
	
	for (i=1; i<=5; i++){
		printf("Insira o valor de A: \n");
		scanf("%d", &A);
		
		printf("Insira o valor de B: \n");
		scanf("%d", &B);
		
		printf("Números pares entre A e B: \n");
		for (j=A; j<=B; j++){
				
		if(j%2==0){
			printf("%d ", j);
		}
		
		
	}
	printf("\n");
	} 
}
