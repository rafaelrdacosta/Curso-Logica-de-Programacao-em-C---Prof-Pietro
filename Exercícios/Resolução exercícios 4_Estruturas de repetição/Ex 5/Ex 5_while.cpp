#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float alt_C, alt_B;
	int anos;

	alt_C = 140;
	alt_B = 145; 
	
	anos = 0;
	while (alt_C<=alt_B){
		alt_C+= 2.1;
		alt_B+= 1.1;
		anos++;
	}
	
	printf("Ser�o necess�rios %d anos.\n", anos);
		
}
