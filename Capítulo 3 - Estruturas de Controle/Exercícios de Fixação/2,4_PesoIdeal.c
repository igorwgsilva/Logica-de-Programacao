#include <stdio.h>

int main(void){
  float altura, peso;
  char sexo;

  printf("Insira altura e sexo (H ou M) respectivamente:\n");
  scanf("%f%s", &altura,&sexo);

  if(sexo == 'H')
    printf("peso ideal: %f", (72.7*altura)-58);
  if(sexo == 'M')
    printf("peso ideal: %f", (62.1*altura)-44.7);


  
  return 0;
}
