#include <stdio.h>

int divisao(int x, int y){
  int resto = x;
  int quociente = 0;
  
  while(resto >= y){
    resto -= y;
    quociente++;
  }
  return quociente;
}

int main(void){
  int x, y, quociente;

  printf("Inserir dividendo e divisor respectivamente:\n");
  scanf("%d%d", &x, &y);

  quociente = divisao(x, y);

  printf("\t%d ÷ %d = %d:\n", x, y, quociente);


  

  return 0;
}
