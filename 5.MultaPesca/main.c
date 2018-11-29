#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int kg, resp;
	float multapg, multa;
	
	resp=1;
	
	do{
	printf("Quantidade de kgs pescados: ");
	scanf("%d",&kg);
	
	if(kg <= 50){
		printf("Voce esta liberado.");
	}
	
	else
	if(kg >= 50){
	multa = kg - 50;	
	multapg = multa * 4;
		printf("Voce pagara multa de: %.2f reais \n", multapg);
	}
		printf("\nCalcular novamente?");
		printf("\n1- Sim ou 2- Nao \n");
		scanf("%d",&resp);
		
		resp=resp+1;
} while(resp<=5);

	system("PAUSE");
  	return 0;
}
