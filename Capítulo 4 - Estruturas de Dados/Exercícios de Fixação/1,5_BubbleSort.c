#include <stdio.h>

int main(void){
  int v[20], i, flag=1, aux=0;

  //leitura
  for(i=0;i<20;i++){
    printf("\nv[%d] = ", i);
    scanf("%d", &v[i]);
  }

  //Ordenação por permutação

  while(flag){
    flag = 0;
    for(i=0;i<19;i++){

      if(v[i] > v[i+1]){

        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        flag = 1;
      }
      }
    
  }

  //imprime
  printf("\n\n");
  for(i=0;i<20;i++)
    printf("\nv[%d] = %d", i, v[i]);
  return 0;

}
