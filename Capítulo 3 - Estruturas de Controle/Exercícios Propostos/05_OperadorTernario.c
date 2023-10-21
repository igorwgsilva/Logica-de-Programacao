#include <stdio.h>

int main(void){

  int dia, mes, ano, d, m, a, idade;

  printf("Insira sua data de nascimento no formato dd/mm/aaaa\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);

  printf("Insira a data atual no formato dd/mm/aaaa\n");
  scanf("%d/%d/%d", &d, &m, &a);

  idade = a - ano;

  m>=mes && d >= dia ? printf("\nIdade = %d", idade) : printf("\nIdade = %d", --idade);

return 0;
}
