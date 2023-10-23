#include <stdio.h>

int main(void){
  int x, w, y, z, i=0;
  printf("Insira dia\n");
  scanf("%d", &x);
  w=x;
  x>=1 && x<=31 ? ++i : i;
  printf("\ni = %d\n", i);

  printf("Insira mês\n");
  scanf("%d", &x);
  y=x;
  x>=1 && x<=12 ? ++i : i;
  printf("\ni = %d\n", i);

  printf("Insira ano\n");
  scanf("%d", &x);
  z=x;
  x>=0 ? ++i : i;
  printf("\ni = %d\n", i);

  //Usando operador ternário
  i == 3 ? printf("Data válida (op ternario)\n") : printf("Data inválida (op ternario)\n");

  //if-else
  if((w >= 1 && w <= 31) && (y >= 1 && y <= 12) && ( x > 0) )
    printf("Data válida ifelse");
  else
    printf("Data inválida ifelse");


  return 0;
}
