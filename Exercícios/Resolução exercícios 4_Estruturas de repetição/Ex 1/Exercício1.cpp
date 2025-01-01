#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Somar todos os números inteiros entre 1 e 10(inclusive) */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma;
	soma = 0;
	
	for(num=1; num<=10; num++)
	{
		soma = soma + num;
	}
	printf ("Soma = %d\n", soma);
		
	system("pause");
	return 0;
}
