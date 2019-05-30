#include <stdio.h>

void bubblesort(int *vetor, int size)
{ /*algoritimo de ordenação do menor para o maior*/
    int i, j, aux;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

void selection_sort(int *vetor, int size) 
{ /*algorítimo de ordenação selection sort*/
    int i, j, aux, imaior;
    for (j = size - 1; j > 0; j--) 
    {
        imaior = 0;
        for (i = 1; i <= j; i++) 
        {
            if (v[i] > v[imaior])
                imaior = i;
        }       
        aux = v[j];
        v[j] = v[imaior];
        v[imaior] = aux
    }
    return;
}

void insertion_sort(int Tab[], int Comp)
{ /*algorítimo de ordenação insertion sort*/
    int I, J;
    int Aux;
    for (I = 1; I < Comp; I++)
    {
        Aux = Tab[I];
        for (J = I; (J > 0) && (Aux < Tab[J - 1]); J - -)
            Tab[J] = Tab[J - 1];
        Tab[J] = Aux;
    }
}

int partition(int V[], int p, int r)
{ /*algorítimo de particionamento*/
    int x, i, aux, j;
    x = V[r];
    i = p - 1;
    for (j = p; j < r; j++)
        if (V[j] <= x)
        {
            i++;
            // troque v[i] e v[j]
            aux = V[i];
            V[i] = V[j];
            V[j] = aux;
        }
    // troque v[i+1] e v[r]
    aux = V[i + 1];
    V[i + 1] = V[r];
    V[r] = aux;
    return i + 1;
}

void quicksort(int V[], int p, int r)
{ /*algorítimo de ordenção quicksort*/
    if (p < r)
    {
        int q = Partition(V, p, r);
        Quicksort(V, p, q - 1);
        Quicksort(V, q + 1, r);
    }
}