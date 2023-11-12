#include <stdio.h>

int main(void){
  unsigned long int i, x=1;

    printf("x = %lu", x);
  for(i=0;i<65;i++){
    x *= 2;
    printf("\nx = %lu", x);
    
  }
  return 0;
}
