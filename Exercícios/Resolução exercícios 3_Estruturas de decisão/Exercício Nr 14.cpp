#include<stdio.h>
#include<stdlib.h>
int main()
{
	int hora, min, hora_i, min_i, hora_f, min_f;
	
	printf("Insira a hora de início do jogo: ");
	scanf("%d", &hora_i);
	
	printf("Insira o min de início do jogo: ");
	scanf("%d", &min_i);
	
	printf("Insira a hora do fim do jogo: ");
	scanf("%d", &hora_f);
	
	printf("Insira o min de fim do jogo: ");
	scanf("%d", &min_f);
	
	if (min_i > min_f)
	{
		min_f = min_f + 60;
		hora_f = hora_f - 1;
	}
	
	if (hora_i > hora_f)
	{
		hora_f = hora_f + 24;
	}
	 min = min_f - min_i;
	 hora = hora_f - hora_i;
	 printf("Duracao %dhr e %dmin.\n", hora, min);
	 
	 system("pause");
	 return 0;
}
