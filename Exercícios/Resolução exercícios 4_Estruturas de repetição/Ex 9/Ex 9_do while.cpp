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
	
	printf("N�meros �mpares entre A e B:\n");
	
	i=A;
	do
	{
		if(i%2!=0)
		{
			printf("%d ", i);
			
		} i++;
	} while( i<B);
	printf("\n");
	system("pause");
	return 0;
}
