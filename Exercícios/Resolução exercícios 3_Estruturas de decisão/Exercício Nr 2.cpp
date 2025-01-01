#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n1, n2, n3;
	
	printf("Insira primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Insira segundo numero:\n");
	scanf("%d", &n2);
	
	printf("Insira terceiro numero:\n");
	scanf("%d", &n3);
	
	if ((n1 > n2) && (n1 > n3))
	   {
		printf("Condicao satisfeita.\n");
	   } else
	    {
		printf("Erro.\n");
		}
		
	system("pause");
	return 0;
}
	
	

