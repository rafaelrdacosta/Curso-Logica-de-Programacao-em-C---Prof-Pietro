#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ant1, ant2, atual, i;
	
	ant1 = 1;
	ant2 = 0;
	
	printf("Série de Fibonacci (8 primeiros termos):\n");
	printf("%d %d ", ant2, ant1);
	
	for (i=3; i<=8; i++)
	{
		atual = ant1 + ant2;
		printf("%d ", atual);
		ant2 = ant1;
		ant1 = atual;
	}
		
	}
