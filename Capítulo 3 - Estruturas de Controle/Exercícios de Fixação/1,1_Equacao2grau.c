#include <stdio.h>
#include <math.h>

int main(void){
float a, b, c, delta, x1,x2;

printf("Insira os valores de a, b e c  respectivamente, da equação quadrática.\n");
scanf("%f%f%f",&a,&b,&c);
printf("\tEquação de 2° grau:\n\t%fx²+ %fx +%f\n",a,b,c);

delta=(pow(b,2)-(4*a*c));
  
  if(delta>=0){
    
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    printf("\n\t∆ = %f\n\traizes: %f e %f\n",delta,x1,x2);
    
  } else {
    printf("\n\tA equação não possui raízes reais.\n");
  }



return 0;
}
