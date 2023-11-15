#include <stdio.h>

int main(void){
  int v[20]={20,19,18,17,16,10,14,13,12,11,10,9,8,-7,6,5,4,3,2,1}, i, j, candidato, menor, pos, troca;

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

  for(i=0;i<20;i++)
    printf("\nv[%d] = %d", i, v[i]);
  return 0;
}
