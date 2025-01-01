#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, i;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	printf("Números ímpares entre A e B:\n");
	for(i=A; i<B; i++)
	{
		if(i%2!=0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
