#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, area;
	int n;
	
	n=1;
	
	do{
	printf ("\nDigite a base do triangulo: ");
	scanf ("%f", &b);
	
	printf ("\nDigite a altura do triangulo: ");
	scanf ("%f", &a);
	
	area = b * a/2;
	printf ("\nA area do seu triangulo e de: %f\n",area);
	
	n = n+1;

	}while(n <=8);
	
	system ("PAUSE");
	return 0;
}
