#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, resp;
	
	resp = 1;
	
	do{
	printf("\n Escolha uma das opcoes: 1: BigMc, 2: Quarteirao, 3: McChicken, 4: Cheddar McMelt, 5: McMax");
	printf("\n Digite o numero do seu lanche de 1 a 5: ");
	scanf("%d", &num);
	
	switch(num){
	case 1:
		printf("BigMc \n");
		break;
		
	case 2:
		printf("Quarteirao \n");
		break;
		
	case 3:
		printf("McChicken \n");
		break;
		
	case 4:
		printf("Cheddar McMelt \n");
		break;
		
	case 5:
		printf("McMax \n");
		break;
		
	default:
		printf("Valor Invalido \n");
	
	}
		printf("Deseja calcular novamente? \n");
		printf("1- Sim ou 2- Nao \n");
		scanf("%d",&resp);
		
} while(resp==1);

	system("PAUSE");
 	return 0;
}
