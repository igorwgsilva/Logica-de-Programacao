#include <stdio.h>

int main() {
    int numero, maior, menor;
    int i;

    // Pedir ao usuário para inserir o primeiro número
    printf("Insira o 1º número inteiro: ");
    scanf("%d", &numero);

    // Inicializar o maior e o menor com o primeiro número inserido
    maior = numero;
    menor = numero;

    // Pedir ao usuário para inserir os próximos 19 números
    for (i = 2; i <= 20; i++) {
        printf("Insira o %dº número inteiro: ", i);
        scanf("%d", &numero);

        // Atualizar o maior, se necessário
        if (numero > maior) {
            maior = numero;
        }

        // Atualizar o menor, se necessário
        if (numero < menor) {
            menor = numero;
        }
    }

    // Imprimir o maior e o menor
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
