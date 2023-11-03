#include <stdio.h>

int potencia(int x, int y){
  int i, aux;
  aux = x;
  for(i=1; i<y; i++){
    x *= aux;
  }
  return x;
}

int main(void){
  int base, expoente, poten;

  printf("Inserir base e expoente respectivamente:\n");
  scanf("%d%d", &base, &expoente);

  poten = potencia(base, expoente);

  printf("\n\t%d elevado a %d = %d", base, expoente, poten);
  
  

  return 0;
}
