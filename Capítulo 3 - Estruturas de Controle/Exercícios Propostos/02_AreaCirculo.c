#include <stdio.h>

int main(void){
  float raio;

  printf("Insira o raio do círculo:\n");
  scanf("%f", &raio);
  raio*=raio*3.14159265358979323846;
   

  printf("\n\tÀrea aproximadamente %.3f", raio);

return 0;
}
