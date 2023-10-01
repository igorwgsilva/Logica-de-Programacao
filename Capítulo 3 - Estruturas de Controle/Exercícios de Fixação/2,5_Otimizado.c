#include <stdio.h>

int main(void) {
    int dia_nasc, mes_nasc, ano_nasc;
    int dia_atual, mes_atual, ano_atual;
    
    printf("Insira sua data de nascimento no formato dd/mm/ano:\n");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Insira a data atual no formato dd/mm/ano:\n");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    int idade;

    // Verifica se já fez aniversário no ano atual
    if (mes_atual > mes_nasc || (mes_atual == mes_nasc && dia_atual >= dia_nasc)) {
        idade = ano_atual - ano_nasc;
    } else {
        idade = ano_atual - ano_nasc - 1;
    }

    printf("Idade: %d anos\n", idade);

    return 0;
}
