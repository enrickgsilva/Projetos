#include <stdio.h>

int square(int x) { /*calcula o quadrado de um número*/
    return x * x;
}

int cube(int x) { /*calcula o cubo de um número*/
    return x * x * x;
}

int factorial(int x) { /*calcula o fatorial de um número*/
    if(x == 0) {
        return 1;
    } else {
        return x * factorial(x-1);
    }
}


int bubblesort(int i, int vetor[], int tam) { /*ordena os valores do maior para o menor*/
    int j, aux;
        for(j = 0; j < tam - 1; j++) {
        if (vetor[j] > vetor[j + 1])
        {
            aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
        }
    }   
    return vetor[i]; /*retorna o vetor da posição i que foi mandada para essa função*/
}

void filter(int (*function)(), int vetor[], int tam) { /*função para filtrar o arr*/
    int i;
    int vetor_saida[tam];

    printf("Vetor incial - [");
    for (i = 0; i < tam - 1; i++)
    {
        printf("%d|", vetor[i]);
    }
    printf("%d]\n", vetor[i]);
    
    for(i = 0; i < tam; i++) {
       vetor_saida[i] = function(i, vetor, tam);
    }

    printf("Vetor final - [");
    for (i = 0; i < tam - 1; i++)
    {
        printf("%d|", vetor_saida[i]);
    }
    printf("%d]\n", vetor_saida[i]);
    return;
}

void map(int (*function)(int), int array[], int tam) { /*função de mapeamento*/
    int i;
    int vetor_meio[tam];

    for (i = 0; i < tam; i++) {
        vetor_meio[i] = function(array[i]);
    }
    filter(bubblesort, vetor_meio, tam); /*high order function*/ /*chamada da função filter*/
    return;
}

int main() {
    int array[] = {1, 9, 7, 5, 8, 6};
    int tam = sizeof(array) / sizeof(int); /*salva o tamanho de qualquer array*/
    map(factorial, array, tam);   /*high order function*/  /*chamada da função map*/

    return 0;
}