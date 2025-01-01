#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float n1, n2, n3, media, exame;
	
	printf("Insira nota 1:\n");
	scanf("%f", &n1);
	
	printf("Insira nota 2:\n");
	scanf("%f", &n2);
	
	printf("Insira nota 3:\n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	printf("Media = %.2f\n\n", media);
	
	if (media >= 7.0 && media <= 10.0)
	{
		printf("Aprovado! Parabens.\n\n");
	}
	
	if (media >= 3.0 && media < 7.0)
	{
		printf("Exame!\n\n");
		exame = 12 - media;
		printf("E preciso tira %.2f no exame!\n\n", exame);
	}
	
	if (media >= 0.0 && media < 3.0)
	{
		printf("Reprovado!\n\n");
	}
	system("pause");
	return 0;
}
