#include <stdio.h>

int main(void) {
    int vetor[3] = {1,2,3};
   
    int *pointer = vetor;
    *(pointer + 1) = 10; //adiciona o valor 10 na posição 2 do vetor, indice 1
    printf("%i\n", vetor[1]);


    getchar();
    return 0;
}