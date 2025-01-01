#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float nota_lab, nota_AS, nota_EF, notafinal;
	char A, B, C, D, E;
	
	printf("Insira a Nota Trabalho:\n");
	scanf("%f", &nota_lab);
	
	printf("Insira a Nota Avaliacao semestral:\n");
	scanf("%f", &nota_AS);
	
	printf("Insira a Nota Exame final:\n");
	scanf("%f", &nota_EF);
		
	notafinal = ((nota_lab*2) + (nota_AS*3) + (nota_EF*4))/9;
	printf("Media = %.2f\n", notafinal); 
	
	if(notafinal >= 8.00 && notafinal <=10.00)
	{
		
		printf("Conceito = %c\n", 'A');
	}
	
	if(notafinal >= 7.00 && notafinal < 8.00)
	{
		
		printf("Conceito = %c\n", 'B');
	}
	
	if(notafinal >= 6.00 && notafinal < 7.00)
	{
	
		printf("Conceito = %c\n", 'C');
	}
	
	if(notafinal >= 5.00 && notafinal < 6.00)
	{
		
		printf("Conceito = %c\n", 'D');
	}
	
	if(notafinal >= 0.00 && notafinal < 5.00)
	{
		
		printf("Conceito = %c\n", 'E');
	}
}
