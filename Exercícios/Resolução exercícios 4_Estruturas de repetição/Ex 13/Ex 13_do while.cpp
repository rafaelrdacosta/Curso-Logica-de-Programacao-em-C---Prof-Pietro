#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i, tab;
	
	N=1;
	do
	{
		for (i=1; i<=10; i++)
		{
			tab = N * i;
			printf("%d x %d = %d\n", N, i, tab);
		} N++;
		printf("\n");
	} while (N<=10);
	
	printf("\n");
	
	system("pause");
	return 0;
}
