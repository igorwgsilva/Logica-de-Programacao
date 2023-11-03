#include <stdio.h>

int AlgoritmoDeEuclides(int x, int y){
  int resto;
  int mdcAtual;
  do{
    mdcAtual = y;
    resto = x % y;
    x = y;
    y = resto;
  }while(resto != 0);

  return mdcAtual;
}

int MMC(int x, int y){
  int mmc = (x * y) /  AlgoritmoDeEuclides( x, y);

  return mmc;
}

int main(void){
  int x, y, mdc, mmc;

  printf("Inserir dois números inteiros:\n");
  scanf("%d%d", &x, &y);

  mdc = AlgoritmoDeEuclides(x, y);
  mmc = MMC(x, y);

 printf("\tmdc = %d\n", mdc);
 printf("\n\tmmc = %d", mmc);


  return 0;
}
