#include <stdio.h>


void print(int *v, int tam) 
{ /*printar o algorítimo bubble recursivo*/
    int i;
    printf("{");
    for(i = 0; i < tam-1; i++) 
    {
        printf("%d,", v[i]);
    }
    printf("%d}\n", v[tam-1]);
    return;
}

void swap (int *v1, int *v2) 
{ /*função que faz a troca dos valores para ordenar a função*/
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
    return;
}

void bubble(int *v, int tam, int i, int j) 
{ /*algorítimo bubble sort de forma recursiva completa*/
    if(i == tam) 
    {
        print(v, tam);
        return;
    }
    if(j == tam) 
    {
        ++i;
        bubble(v, tam, i, i+1);
        return;
    }
    if(v[j] < v[i]) 
    {
        swap(&v[i], &v[j]); /*passa o endereço de memória dos vetores nas posições atuais*/
    }
    bubble(v, tam, i, ++j);
    return;
}

int main() 
{ /*função para definir o vetor a ser ordenado*/
    int vetor[] = {3,6,4,9,25,1};
    int tam = sizeof(vetor) / sizeof(int); /*tam recebe o tamanho exato do vetor*/
    bubble(vetor, tam, 0, 1);
    return 0;
}