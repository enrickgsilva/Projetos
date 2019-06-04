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
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    bubble(v, tam, i, ++j);
    return;
}

int main() 
{
    int vetor[] = {3,6,4,9,25,1};
    int tam = sizeof(vetor) / sizeof(int);
    bubble(vetor, tam, 0, 1);
    return 0;
}