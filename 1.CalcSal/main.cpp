#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float numdep, valhr, hrtrab, valbru, valliq;
int resp;

resp=1;

do{

printf("\n Numero de dependentes: ");
scanf("%f", &numdep);

printf("\n Valor hora: ");
scanf("%f", &valhr);

printf("\n Horas trabalhadas: ");
scanf("%f", &hrtrab);

valbru = valhr * hrtrab;
printf(" Valor bruto: %.2f \n", valbru);

valliq = valbru + (numdep*300);
printf(" Valor liquido: %.2f \n", valliq);

resp = resp+1;
} while(resp<=10);

system("PAUSE");
return 0;
}
