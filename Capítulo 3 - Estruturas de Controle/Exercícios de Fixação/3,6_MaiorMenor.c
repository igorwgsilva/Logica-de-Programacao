#include <stdio.h>

int main(void){
	int i, x, maior=0, menor=1, MaiorAnterior=0, MenorAux=1;
	
	for(i=0;i<20;i++){
    
		printf("Insira um inteiro:\n");
		scanf("%d", &x);

		if(x<maior){
      if(x==0){
        MenorAux = x;
      }
      if( x <= menor || menor == 0)
		    menor = x;
      	/*printf("\nmenor: %d\n", menor);
      	printf("maior: %d\n", maior);*/
    }else{
        if(MaiorAnterior<menor || MaiorAnterior == 1){
          menor = MaiorAnterior;
        }
        maior = x;
        MaiorAnterior = maior;
      	/*printf("\nmaior: %d\n", maior);
      	printf("menor: %d\n", menor);*/

			}
	
	} 
if(MenorAux == 1)


  printf("\nMaior inteiro: %d\nMenor Inteiro: %d", maior, menor);
  else {
    printf("\nMaior Inteiro inserido: %d\nMenor Inteiro inserido: %d", maior, MenorAux);
  
}


return 0;
}
