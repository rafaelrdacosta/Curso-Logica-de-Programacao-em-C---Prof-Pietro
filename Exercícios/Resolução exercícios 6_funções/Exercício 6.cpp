#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void nr_real (float nr_real, int *parteint, float *frac){
	
	*parteint = (int)nr_real;
	*frac = nr_real - (float)*parteint;

	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float num, part_f;
	int part_i;
	
	printf("Insira um número real:\n");
	scanf("%f", &num);
	
	nr_real (num, &part_i, &part_f);
	
	printf("Parte inteira: %d.\n", part_i);
	printf("Parte fracionária: %f.\n", part_f);
}
