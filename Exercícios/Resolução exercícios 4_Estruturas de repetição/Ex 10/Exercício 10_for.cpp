#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, n_maior, n_menor;
	float alt, maior, menor;
	maior = 0;
	menor = 0;
	
	for (i=1; i<=3; i++)
	{
		printf("Insira o n�mero do aluno: ");
		scanf(" %d", &num);
		
		printf("Insira a altura do aluno: ");
		scanf(" %f", &alt);
		
			if(i == 1){
			maior = alt;
			n_maior = num;
			menor = alt;
			n_menor = num;
		} else {
			if (alt > maior){
				maior = alt;
				n_maior = num;
			} if (alt < menor){
				menor = alt;
				n_menor = num;
			}
		}
   }
		printf("N�mero do maior aluno:%d.\n", n_maior);
		printf("Altura do maior aluno:%.2f.\n", maior);
		printf("N�mero do menor aluno:%d.\n", n_menor);
		printf("Altura do menor aluno:%.2f.\n", menor);
		
		return 0;
	} 
	
	
	
