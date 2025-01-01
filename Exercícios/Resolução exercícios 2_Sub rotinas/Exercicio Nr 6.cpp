#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float num, f_num;
	
	printf("Digite um numero real:\n");
	scanf("%f", &num);
	
	printf("Parte inteira: %d\n", (int)num);
	printf("Parte fracionaria: %.2f\n", num-((int)num));
	
	system("pause");
	return 0;
}
