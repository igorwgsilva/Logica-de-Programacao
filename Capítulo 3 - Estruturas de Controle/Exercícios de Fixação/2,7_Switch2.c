#include <stdio.h>

int main(void) {
    int idade;

    printf("Insira idade do nadador:\n");
    scanf("%d", &idade);

    switch (idade) {
        case 5 ... 7: 
          printf("Infantil A."); 
          break;
        case 8 ... 10: 
          printf("Infantil A."); 
          break;
        case 11 ... 13:
          printf("Juvenil A."); 
          break;      
        case 14 ... 17: 
          printf("Juvenil B."); 
          break;
        default: printf("Adulto.");
        break;
    }

    return 0;
}
