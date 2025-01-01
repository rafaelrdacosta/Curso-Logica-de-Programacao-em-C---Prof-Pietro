#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n1, n2, maior;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Insira o proximo numero:\n");
	scanf("%d", &n2);
	
	if(n1 > n2)
		{
			printf("Maior numero = %d\n", n1);
		} 
	if(n2 > n1){
			printf("Maior numero = %d\n", n2);
	}
	if (n1 == n2)
		{
			printf("Os numeros sao iguais\n");
		}
} 
	
	

