#include <stdio.h>

int main(void){

  int i, v[5];

  for(i=0;i<5;i++){
    printf("\nvetor[%d] = ", i);
    scanf("%d", &v[i]);
  }

  printf("\nAntes:\n");

  for(i=0;i<5;i++){
    printf("\nv[%d] = %d",i, v[i]);
  }

  printf("\nDepois:\n");

  for(i=4;i>=0;i--){
    printf("\nv[%d] = %d",i, v[i]);
  }


  return 0;
}
