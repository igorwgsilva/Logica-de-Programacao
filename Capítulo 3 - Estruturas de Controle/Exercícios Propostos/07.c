#include <stdio.h>

int main(void){
  int x;
  printf("Insira um número inteiro respectivo de algum mês (1 a 12)\n");
  scanf("%d", &x);

  (x>=1 && x<=12) ? printf("Correto") : printf("Valor inválido");
  


  return 0;
}
