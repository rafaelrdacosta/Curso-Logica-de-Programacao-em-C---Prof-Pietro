#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, fat, i;
	
	printf("Digite um número: ");
	scanf("%d", &N);
	
	fat = 1;
	
	i=N;
	do
	{
		fat = fat*i;
		i--;
	} while(i>=1);
	
	printf("%d! = %d\n", N, fat);
	
	
	system("pause");
	return 0;
}
