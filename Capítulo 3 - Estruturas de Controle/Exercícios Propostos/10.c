#include <stdio.h>

int main(void) {
  int idade;

  printf("Insira sua idade:\n");
  scanf("%d", &idade);
  
  if(idade <16)
    printf("Não vota");
  if(idade>=16 && idade <= 65)
    printf("Eleitor obrigatório");
  if(idade > 65)
    printf("Eleitor facultativo");

  return 0;
}
