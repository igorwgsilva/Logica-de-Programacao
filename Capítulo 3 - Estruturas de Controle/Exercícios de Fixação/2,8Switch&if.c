#include <stdio.h>

int main(void){
  int valor, codigo, pagamento;

  printf("Inserir preço:\n");
  scanf("%d", &valor);

  printf("Inserir código de etiqueta:\n");
  scanf("%d", &codigo);

  printf("Inserir forma de pagamento:\n\tÀ vista dinh. ou cheque (1)\n\tParcelado em 2x (2)\n\tParcelado em 3x (3)\n\tÀ vista cartão (4)\n");
  scanf("%d", &pagamento);

  switch(codigo){
    case 1:
      if(pagamento == 1){
        valor = valor - (0.1*valor);
        printf("Valor final: %d", valor);
      }else{
        printf("Valor final: %d", valor);
      }
    break;

    case 2:
      if(pagamento == 4){
        valor = valor - (0.05*valor);
        printf("Valor final: %d", valor);
      }else{
        printf("Valor final: %d", valor);
      }
    break;

    case 3:
      if(pagamento == 2){
        printf("Valor final: %d", valor);
      }else{
        printf("Valor final: %d", valor);
      }
    break;

    case 4:
      if(pagamento == 3){
        valor = valor + (0.1*valor);
        printf("Valor final: %d", valor);
      }else{
        printf("Valor final: %d", valor);
      }
    break;

    
  }



  return 0;
}
