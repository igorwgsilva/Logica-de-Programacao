#include <stdio.h>

int main(void){
  int i, n;
  float h=0;

  printf("Insira um número diferente de 0:\n");
  scanf("%d", &n);

  for(i=1;i<=n;i++){
    
    h += 1.0/i;
  
  }
  printf("%f", h);

/* 
O problema está relacionado ao tratamento de tipos em C. Quando você faz uma divisão entre dois inteiros, o resultado será truncado para um inteiro, mesmo se a variável à esquerda da divisão for do tipo float. Isso ocorre porque, em C, a regra é que, se ambos os operandos de uma operação aritmética são inteiros, o resultado também será inteiro.

Ao substituir 1 por 1.0 na expressão 1/i, você está garantindo que pelo menos um dos operandos da divisão é do tipo float. Isso força a operação a ser realizada como uma divisão de ponto flutuante, preservando assim a parte fracionária do resultado.
*/
  return 0;
}
