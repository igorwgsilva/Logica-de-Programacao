#include <stdio.h>

int main(void){
  int x, resto, r2;

  printf("Insira um número de tês dígitos:\n");
  scanf("%d", &x);
  resto = x%10;
  r2 = (x/10)%10;
  printf("\n%d%d%d", resto,r2, x/100);

return 0;
}
