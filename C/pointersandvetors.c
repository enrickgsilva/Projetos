#include <stdio.h>

int main(void) {
    int vetor[3] ={1,2,3};
    int *ponteiro = vetor; //aponta no primeiro membro do vetor
    //int *ponteiro = &vetor[1]; //especificando o elemento no vetor

    printf("%i\n", *ponteiro);

    getchar();
    return 0;
}