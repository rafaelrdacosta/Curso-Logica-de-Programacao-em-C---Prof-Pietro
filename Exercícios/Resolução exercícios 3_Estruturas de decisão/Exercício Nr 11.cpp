#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	int a, b, c, delta;
	float x1, x2;
	
		
	printf("Informe o valor de a:\n");
	scanf("%d", &a);
	
	printf("Informe o valor de b:\n");
	scanf("%d", &b);
	
	printf("Informe o valor de c:\n");
	scanf("%d", &c);
	
	delta = b*b - 4*a*c;
	
	if (delta < 0)
		{
			printf("Raizes fora do dominio dos numeros reais.\n");
		} else 
		{
			x1 = (-b + sqrt(delta))/(2*a);     	//sqrt retorna a raiz quadrada do número
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Raiz x1 = %.1f\n", x1);
			printf("Raiz x2 = %.1f\n", x2);
		}
	system("pause");
	return 0;
}
