#include <stdio.h>

int main(void){
  int v[20], i, j, candidato, menor, pos, troca;

  //leitura
  for(i=0;i<20;i++){
    printf("\nv[%d] = ", i);
    scanf("%d", &v[i]);
  }

  //seleção direta
  for(i=0;i<20;i++){
    candidato = v[i];
    pos = i;
    
    for(j=i;j<20;j++){
      if(candidato > v[j]){
        candidato = v[j]; 
        pos = j;
      }
    }
    
    troca = v[i];
    v[i] = v[pos];
    v[pos] = troca;
  }

  //imprime
  printf("\n\n");
  for(i=0;i<20;i++)
    printf("\nv[%d] = %d", i, v[i]);
  return 0;
}
