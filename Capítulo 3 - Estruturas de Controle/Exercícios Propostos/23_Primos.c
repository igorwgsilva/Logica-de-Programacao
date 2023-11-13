#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;  // Encontrou um divisor, não é primo
        }
    }

    return true;  // Não encontrou divisores, é primo
}

int main(void){
  int x, y,  i, maior, menor;

  printf("Insira dois valores respectivamente:");
  scanf("%d%d", &x, &y);

  if(x>=y){
    maior = x;
    menor = y;
  }else{
    maior = y;
    menor = x;
  }

  for(i=menor;i<=maior;i++){
    if(ehPrimo(i)){
      printf("\t%d", i);
    }
    
    
  }
    
  
  

  return 0;
}
