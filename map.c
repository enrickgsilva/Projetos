#include <stdio.h>

int square(int x) { /*calcula o quadrado de um número*/
    return x * x;
}

int factorial(int n) { /*calcula o fatorial de um número*/
    if(n == 0 || n == 1) return 1;
    
    int i, fat;

    for(fat = 1; n > 1; n = n - 1)
        fat = fat * n;

    return fat;
}

void map(int(*function)(int), int array[], int tam) { 
    int i;
    printf("{");
    for(i = 0; i < tam - 1; i++) {
        printf("%d, ", function(array[i]));
    }
    printf("%d}\n", function(array[i]));
    return;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6 ,7};
    int tam = sizeof(array) / sizeof(int); /*salva o tamanho de qualquer array*/
    map(factorial, array, tam); /*chamada da função map*/

    return 0;
}