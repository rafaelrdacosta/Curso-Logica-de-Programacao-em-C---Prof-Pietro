#include<stdio.h>
#include<stdlib.h>
int main()
{
	float sal, novo_sal; 
	
	printf("Informe o salario:\n");
	scanf("%f", &sal);
	
	if (sal <= 500)
	{
		novo_sal = sal + 150 + 0.05*sal;
		printf("Novo salario: %.2f\n", novo_sal);
	}
	
	if (sal > 500 && sal <= 600)
	{
		novo_sal = sal + 150 + 0.12*sal;
		printf("Novo salario: %.2f\n", novo_sal);
	}
	
	if (sal > 600 && sal <= 1200)
	{
		novo_sal = sal + 100 + 0.12*sal;
		printf("Novo salario: %.2f\n", novo_sal);
	}
	
	if (sal > 1200)
	{
		novo_sal = sal + 100;
		printf("Novo salario: %.2f\n", novo_sal);
	}
	system("pause");
	return 0;
}
