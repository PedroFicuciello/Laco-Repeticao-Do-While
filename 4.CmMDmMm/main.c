#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float cm, m, mm, dcm;
int resp;

resp=1;

do{
printf("\nDigite a medida em centimetros: ");
scanf("%f", &cm);

m=cm/100;
mm=cm/0.10000;
dcm = cm/10;

printf("\nA medida em Metros e:%.2f", m,"Metros");
printf("\nA medida em Milimetros e:%.2f", mm,"Milimetros");
printf("\nA medida em Decimetros e:%.2f", dcm,"Decimetros");
	
resp = resp+1;

} while(resp<=10);

system("PAUSE");
return 0;
}
