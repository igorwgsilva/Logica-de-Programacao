#include <stdio.h>

int main(void){
  int x=0,y=0;
  char operacao;

  printf("Inserir x:\n");
  scanf("%d", &x);

  printf("Inserir y:\n");
  scanf("%d", &y);

  printf("Escolha a operação\n");
  scanf(" %c", &operacao);

  switch(operacao){
    case '+':
      printf("%d + %d = %d", x, y, x+y);
    break;

    case '-':
      printf("%d - %d = %d", x, y, x-y);
    break;

    case '*':
      printf("%d x %d = %d", x, y, x*y);
    break;

    case '/':
      printf("%d / %d = %d", x, y, x/y);
    break;

    
  }



  return 0;
}
