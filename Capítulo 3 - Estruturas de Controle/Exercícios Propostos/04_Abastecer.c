#include <stdio.h>

int main(void){
  float litrosRestante, litros,distancia,consumo,autonomia;
  
  printf("Insira quantos litros ainda têm no tanque:\n");
  scanf("%f", &litrosRestante);
  
  printf("Insira quantos litros quer abastecer:\n");
  scanf("%f", &litros);
  
  printf("Insira a distância percorrida desde o ultimo abastecimento:\n");
  scanf("%f", &distancia);

  consumo = distancia / litros;
  autonomia = litrosRestante * consumo;

  printf("\tConsumo efetuado: %.2f Km/L\n\tAutonomia antes de abastecer: %.2f", consumo, autonomia);
  
return 0;
}
