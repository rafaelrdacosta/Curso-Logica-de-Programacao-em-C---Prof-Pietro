#include<stdio.h>
#include<stdlib.h>
int main()
{
	int I;
	float A, B, C;
	
	printf("Insira o valor de A:\n");
	scanf("%f", &A);
	
	printf("Insira o valor de B:\n");
	scanf("%f", &B);
	
	printf("Insira o valor de C:\n");
	scanf("%f", &C);
	
	printf("Valor de I\tForma de escrever\n");
	printf("1\t\t A, B, C em ordem crescente\n");
	printf("2\t\t A, B, C em ordem descrescente\n");
	printf("3\t\t O maior fica entre os outros dois números\n");
	
	printf("Insira o valor de I: ");
	scanf("%d", &I);
	
	if(I==1)
	{
		if(A < B && A < C)
		{
			if(B < C)
			{
			printf("%.1f - %.1f - %.1f\n", A, B, C);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", A, C, B);
				}
        }
        
        if(B < A && B < C)
		{
			if(A < C)
			{
			printf("%.1f - %.1f - %.1f\n", B, A, C);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", B, C, A);
				}
        }
        if(C < A && C < B)
		{
			if(A < B)
			{
			printf("%.1f - %.1f - %.1f\n", C, A, B);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", C, B, A);
				}
        }
        
     }	
	
	if(I==2)
	{
		if(A > B && A > C)
		{
			if(B > C)
			{
			printf("%.1f - %.1f - %.1f\n", A, B, C);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", A, C, B);
				}
        }
        
        if(B > A && B > C)
		{
			if(A > C)
			{
			printf("%.1f - %.1f - %.1f\n", B, A, C);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", B, C, A);
				}
        }
        if(C > A && C > B)
		{
			if(A > B)
			{
			printf("%.1f - %.1f - %.1f\n", C, A, B);	
			} else
				{
				printf("%.1f - %.1f - %.1f\n", C, B, A);
				}
        }
      
    }
	if (I == 3)
	{
		if ((A > B) && (A > C)) 
		{
		printf("%.1f - %.1f - %.1f\n", B, A, C);	
		}
		
		if ((B > A) && (B > C)) 
		{
		printf("%.1f - %.1f - %.1f\n", A, B, C);	
		}
		
		if ((C > B) && (C > A)) 
		{
		printf("%.1f - %.1f - %.1f\n", A, C, B);	
		}
	}	
	system("pause");
	return 0;		
		
}
	
	
	
	

	
		
		
		
		
		
			
		
		
		
	

