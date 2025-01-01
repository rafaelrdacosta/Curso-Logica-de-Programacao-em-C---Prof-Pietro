#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcNrdegraus (float alt_degrau, float alt_escada){
	int Nr_degraus = alt_escada*100/alt_degrau;
	return Nr_degraus;
}
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	
 	float alt_d, alt_e;
	int Nr_d;
 	
 	printf("Insira a altura de cada degrau (cm): \n");
 	scanf("%f", &alt_d);
 	
 	printf("Insira a altura da escada (m): \n");
 	scanf("%f", &alt_e);
 	
 	Nr_d = calcNrdegraus (alt_d, alt_e);
 	
 	printf("Número de degraus: %d\n", Nr_d);
 }
