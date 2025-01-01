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
	while(i>=1)
	{
		fat = fat*i;
		i--;
	}
	printf("%d! = %d\n", N, fat);
	
	
	system("pause");
	return 0;
}
