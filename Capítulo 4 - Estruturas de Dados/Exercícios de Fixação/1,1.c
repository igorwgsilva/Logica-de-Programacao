#include <stdio.h>

int main(void){
  int u[20], v[20], w[20], i, j=0;
  char z[5] = {'+', '-', '*', '/', '%'}, operador;
  

  for(i=0;i<20;i++){
    printf("\nu[%d] = ", i);
    scanf("%d", &u[i]);
  }
  
  printf("\n");
  
  for(i=0;i<20;i++){
    printf("\nv[%d] = ", i);
    scanf("%d", &v[i]);
  }

  printf("\n");
  
  for(i=0;i<20;i++){
    if(j ==5){
      j = 0;
    }
    
    operador = z[j];

    switch(operador){
      case '+':
      w[i] = u[i] + v[i]; printf("w[%d] = %d (soma)\t", i, w[i]);
      break;

      case '-':
      w[i] = u[i] - v[i]; printf("w[%d] = %d (sub.)\t", i, w[i]);
      break;

      case '*':
      w[i] = u[i] * v[i]; printf("w[%d] = %d (mult.)\t", i, w[i]);
      break;

      case '/':
      w[i] = u[i] / v[i]; printf("w[%d] = %d (div.)\t", i, w[i]);
      break;

      case '%':
      w[i] = u[i] % v[i]; printf("w[%d] = %d (resto)\t", i, w[i]);
      break;
    }
    j++;
  }

  
/*  for(i=0;i<20;i++){
    printf("w[%d] = %d\t", i, w[i]);
    if(i % 4 == 0)
      printf("\n");
  }
*/

  return 0;
}
