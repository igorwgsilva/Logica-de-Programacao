#include <stdio.h>

int main(void){

  int i, cont=0, aux=0, v[6];

  for(i=0;i<6;i++){
    printf("\nvetor[%d] = ", i);
    scanf("%d", &v[i]);
  }

  for(i=1;i<7;i++){
    if(v[i-1]<v[i])
      cont++;
    else{
      if(cont>=aux)
      aux = cont;
      cont=0;
    }
  }

  printf("\n\tMaior sequência: %d", aux);


  return 0;
}
