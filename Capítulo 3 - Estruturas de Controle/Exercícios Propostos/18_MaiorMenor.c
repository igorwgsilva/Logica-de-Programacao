#include <stdio.h>

int main(void){
  int vetor[10], menor, maior, i, x=1;

  vetor[9] = -1;

  for(i=0;i<9;i++){
    printf("Insira o %d° valor\n", x++);
    scanf("%d", &vetor[i]);
  }

  /*for(i=0;i<10;i++){
    printf("\n\t%d\n", vetor[i]);
  }*/

  maior = vetor[0];
  menor = vetor[0];
  
  for(i=0; i<9; i++){
    if(vetor[i] >= maior)
      maior = vetor[i];
    else
      menor = vetor[i];
  }

  printf("\n\tmaior = %d\n\tmenor = %d", maior, menor);



  return 0;
}
