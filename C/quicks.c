#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *v1, int *v2) { /*Faz a troca dos valores*/
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
    return;
}

int particiona(int *vet, int beggin, int end) { /*Faz o particionamento do array*/
    int L = beggin;
    int R = end;
    int pivot = vet[beggin];

    while(L < R) { /*Enquanto a esquerda for menor que a direita*/
        while(vet[L] <= pivot) L++;
        while(vet[R] > pivot) R--;

        if(L < R) { /*Enquanto a esquerda for menor que a direita faz a troca dos valores*/
            swap(&vet[L], &vet[R]);
        }
    }
    vet[beggin] = vet[R]; /*O inicio do vetor troca com o vetor da posição da direita*/
    vet[R] = pivot; /*O vetor da direita recebe o valor do pivot*/
    return R;
}

void quicksort(int *vet, int beggin, int end) { /*Algorítimo de ordenação*/
    if(beggin < end) {
        int pivot = particiona(vet, beggin, end);
        quicksort(vet, beggin, pivot-1);
        quicksort(vet, pivot+1, end);
    }
    return;
}

void display(int *vet, int size) { /*Mostra os valores do vetor inicial e o final*/
    int i;
    printf("{");
    for(i = 0; i < size-1; i++) {
        printf("%d, ", vet[i]);
    }
    printf("%d}\n", vet[i]);
    return;
}

int main() {
    int vet[] = {25,40,55,20,44,35,38,99,10,65,50};
    int size = sizeof(vet) / sizeof(int);

    printf("Vetor inicial = ");
    display(vet, size);

    quicksort(vet, 0, size-1);

    printf("Vetor final = ");
    display(vet, size);

    return 0;
}
