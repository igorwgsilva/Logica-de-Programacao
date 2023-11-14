#include <stdio.h>


int main(void){
  float numerador=1, denominador=1;
  float H=1;


  for(numerador=1;numerador<90 && denominador <50;){
    numerador+=2;
    denominador++;
    H += numerador/denominador;
    //printf("\t%f / %f\t+", numerador, denominador);
    printf("%f\t", H);
  }
    
  
  

  return 0;
}
