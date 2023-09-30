#include <stdio.h>
#include <math.h>

int main (void){
  int x1,y1,x2,y2;
  float distancia;

  printf("Insira as coordenadas (x,y) respectivamente do ponto 1:\n");
  scanf("%d%d",&x1,&y1);
  printf("Insira as coordenadas (x,y) respectivamente do ponto 2:\n");
  scanf("%d%d",&x2,&y2);

  distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  printf("\nDistância entre os pontos: %f", distancia);

  return 0;
  
}
