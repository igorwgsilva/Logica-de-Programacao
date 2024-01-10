#include <stdio.h>

int main(void){

  int i, x=1,v[5];

  for(i=0;i<5;i++){
    printf("\nvetor[%d] = ", i);
    scanf("%d", &v[i]);
  }

  for(i=0;i<5;i++){
    if(i%2==0)
      v[i]*=3;
      else 
      v[i]*=2;
    printf("\n%d° posição = %d",x++, v[i]);
  }


  return 0;
}
