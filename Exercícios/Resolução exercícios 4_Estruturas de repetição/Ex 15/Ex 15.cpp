#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
   setlocale(LC_ALL, "Portuguese");
   
   int N, i, j;
   float res, fat;
   
   printf("Insira o valor de N: \n");
   scanf("%d", &N);
   
   res = 1;
   for(i=1; i<=N; i++){
   	fat = 1;
   	for(j=1; j<=i; j++){
   		fat = fat * (float) j;
	   }
	   res = res +1/fat;
   }
	printf("Resultado: %f", res);
}
