#include <stdio.h>
#include <math.h>

int main(void){
  float R,V;

  printf("Insira o Raio para calcular volume:\n");
  scanf("%f", &R);

  V = (4/3)*M_PI*pow(R,3);

  printf("Volume: %f", V);
  

  
  return 0;
}
