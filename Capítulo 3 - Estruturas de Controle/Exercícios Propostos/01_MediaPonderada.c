#include <stdio.h>

int main(void){
  int x, i, media=0;

  for(i=1;i<6;i++){
    printf("Insira um número:\n");
    scanf("%d", &x);
    media += x*i;
  }

  printf("\n\tA média é: %d", media/5);

return 0;
}
