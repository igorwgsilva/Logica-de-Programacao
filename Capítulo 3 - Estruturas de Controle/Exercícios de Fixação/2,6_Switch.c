#include <stdio.h>

int main(void){
int codigo;

printf("Insira o código do produto:\n");
scanf("%d", &codigo);

switch(codigo){
	case 1: 
	 printf("Alimento não perecível.");
	 break;

	case 2: case 3: case 4: 
	 printf("Alimento perecível.");
	 break;

	case 5: case 6: 
	 printf("Vestuário.");
	 break;

	case 7: 
	 printf("HIgiene.");
	 break;

	case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: 
	 printf("Limpeza e ultensilhos.");
	 break;

	default: 
	 printf("Inválido.");
	 break;

}

return 0;
}
