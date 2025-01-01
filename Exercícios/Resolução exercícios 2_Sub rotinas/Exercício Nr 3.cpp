#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float pes_rac, pes_racg, qtd_rd, cons_g, pes_resto; 
	int nr_g;
	
	printf("Insira o peso do saco de racao (quilos):\n");
	scanf("%f", &pes_rac);
	
	printf("Insira a quantidade gatos:\n");
	scanf("%d", &nr_g);
	
	printf("Insira a qtd racao por gato/dia:\n");
	scanf("%f", &qtd_rd);
	
	pes_racg = pes_rac*1000;
	cons_g = 5*qtd_rd*nr_g;
	pes_resto = (pes_racg - cons_g)/1000;
	
	printf("Peso da racao em g: %.2f g\n", pes_racg);
	printf("Consumo total de racao em 5 dias: %.2f g\n\n", cons_g);
	printf("Sobra de racao apos cinco dias: %.2f Kg\n", pes_resto);
	
	system("pause");
	return 0;
	
}
