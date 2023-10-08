#include <stdio.h>

unsigned long int fatRec(unsigned long int x){
  if(x == 0) return 1;
  return x * fatRec(x-1);

}

int main(void){
  unsigned long int x, y;

  printf("Insira um número inteiro:\n");
  scanf("%lu", &x);

  y = fatRec(x);
  printf("\nFatorial com recursividade: %lu", y);
  

  return 0;
}
