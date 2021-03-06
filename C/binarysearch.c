#include <stdio.h>

int binary_search(int *vetor, int size, int element) { /*algorítimo de procura binária*/
    int i, middle, j = 0;
    int beggin = 0;
    int end = size - 1;

    while(beggin <= end) {
        middle = (beggin + end) / 2;
        if(vetor[middle] < element) {
            beggin = middle + 1;
        } else if(vetor[middle] > element) {
           end =  middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}

void bubblesort(int *vetor, int size) { /*algoritimo de ordenação do menor para o maior*/
    int i, j, aux;

    for(i = 0; i < size; i++) {
        for(j = 0; j < size - 1 - i; j++) {
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    printf("Diga um valor para procurar no array\n");
    int element;
    scanf("%d", &element);

    int x = binary_search(vetor, size, element);

    if(x == -1) {
        printf("Elemento nao encontrado\n");
    } else {
        printf("Elemento %d esta na posicao %d do Array\n", element, x+1);
    }

    return;
}

int main() {
    int array[] = {5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    bubblesort(array, size);
    return 0;
}
