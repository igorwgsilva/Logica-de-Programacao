#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 e 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;  // Encontrou um divisor, não é primo
        }
    }

    return true;  // Não encontrou divisores, é primo
}

int main() {
    // Variável
    int numero;

    // Solicita ao usuário para inserir um número
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é primo
    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
