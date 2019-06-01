#include <stdio.h>

int somar_vetor(int vetor[], const int n) {
    int soma = 0;
    int *ponteiro;
    int *const final_vetor = vetor + n; //ponteiro que aponta para a ultima posição do vetor

    /*na inicialização o ponteiro está no endereço de memória do primeiro valor do vetor
      e enquanto o endereço de memória do ponteiro for menor que o endereço de memória do final-vetor o laço roda*/
    for(ponteiro = vetor; ponteiro < final_vetor; ponteiro++) {
        soma += *ponteiro;
    }

    return soma;
}

int main(void) {
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %i\n", somar_vetor(vetor, 10));

    getchar();
}