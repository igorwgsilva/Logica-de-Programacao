#include <stdio.h>

int main(void){
float peso, altura, IMC, x;

printf("Insira peso e altura respectivamente.\n");
scanf("%f%f", &peso, &altura);

IMC = peso/(altura*altura);

  if(IMC < 18.5){
	   printf("\nabaixo do peso");
  }
  
  else if(IMC >= 18.5 || IMC <=25){
    	   printf("\npeso normal");
  }
    
  else if(IMC >= 25 || IMC <=30){
       	   printf("\nacima do peso");
     }
  
  else if(IMC >= 25 || IMC <=30){
    	   printf("\nacima do peso");
  }
  
  else if(IMC > 30){
	 printf("\nobeso");
  }


return 0;
}
