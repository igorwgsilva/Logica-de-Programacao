#include <stdio.h>


int main(void){
  int i;
  float x=1.50, y=1.10;



  for(i=1;y<=x;i++){
    printf("Ano %d\nx = %f\ny = %f\n\n", i, x, y);
    x+=0.02;
    y+=0.03;
  }
  /*
  x+=0.02;
  y+=0.03;
  printf("Ano %d\nx = %f\ny = %f\n\n", i, x, y);
  */

  printf("Para que y > x foram necessários %d anos", i);
  return 0;
}
