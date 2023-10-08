#include <stdio.h>

int main(void){
  float n, x=0,raizTeste;

  printf("Insira um número inteiro:\n");
  scanf("%f", &n);
  
  for(;x*x <= n;x++);
  
  raizTeste = x*x;

  printf("%f", x);
  
  if(raizTeste > n){
    do{
      x -= 0.1;
      raizTeste = x*x;
    }while(raizTeste >= n);
  }

  printf("\n Raiz quadrada de %.0f é aproximadamente %.1f", n, x);

  return 0;
}
