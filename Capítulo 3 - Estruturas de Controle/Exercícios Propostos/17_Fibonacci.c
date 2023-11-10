#include <stdio.h>

void Fib(int x, int y){
  for(int i=0;i<20;i++){
    int prox = x+y;
    printf(" %d", prox);
    x = y;
    y = prox;
  }
}

int main(void){
  int x, y, i;

  printf("Inserir o primeiro e segundo termo da sequência respectivamente:\n");
  scanf("%d%d", &x, &y);

  printf("\n%d %d", x, y);

  Fib(x, y);
  
  return 0;
}
