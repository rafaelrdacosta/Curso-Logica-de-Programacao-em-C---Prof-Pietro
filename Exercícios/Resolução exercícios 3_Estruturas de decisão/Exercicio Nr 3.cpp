#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int num;
	
	printf("Insira um numero inteiro:\n");
	scanf("%d", &num);
	
	if (num%2==0){
		printf("%d e par.\n", num);
	} else {
		printf("%d e impar.\n", num);
	}
	system("pause");
	return 0;
}
