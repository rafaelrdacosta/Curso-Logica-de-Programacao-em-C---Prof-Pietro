#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3];
	int i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", mat[i][j]=(i*i)+j);
		}
	printf("\n");
	}
}
