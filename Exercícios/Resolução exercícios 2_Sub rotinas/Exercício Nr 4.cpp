#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float alt_deg, alt_alc;
	int nr_deg;
	
	printf("Qual altura em cm do degrau?\n");
	scanf("%f", &alt_deg);
	
	printf("Qual altura em m deseja alcancar?\n");
	scanf("%f", &alt_alc);
	
	nr_deg = (alt_alc*100)/alt_deg;
	
	printf("Numero de degraus necessarios:%d\n", nr_deg);
}
