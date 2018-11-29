#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int anonasc, id, anoat, resp;
  
  resp=1;
  
  do{
  printf("Digite seu ano de nascimento: ");
  scanf("%d", &anonasc);
  
  printf("Digite o ano atual: ");
  scanf("%d",&anoat);
  
  id = anoat - anonasc;
  
  if (id < 18) {
     printf("Nao atingiu a maioridade \n ");          
  }
  else 
       printf("Atingiu a maioridade \n");
       resp = resp + 1;
       } while(resp<=15);
        
  system("PAUSE");	
  return 0;
}
