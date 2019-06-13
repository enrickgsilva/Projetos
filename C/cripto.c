#include <stdio.h>
#include <math.h>

void get_primos(int *vetor) { //pega os 100 primeiros números primos
    int i, c = 0;
    int aux = 0;
    int j = 2;
        
        while(c < 200) {
            for (i = 2; i < j; i++) {
            if(j % i == 0)  {
                aux += 1;
            }
        }
            if(aux == 0) {
                vetor[c] = j; 
                c++;
            }
        aux = 0;
        j++;
    }
    return;
}

void print(int *valores) {
    for(int i= 0; valores[i] != 0; i++) {
        printf("%d - ", valores[i]);
    }
    printf("\n\n");
    return;
}

void verifica_multiplos(int *vetor, int n) { //pega todos os multiplos primos de um N dado
    int i = 0, c = 0;
    int valores[100] = {0};

        while(n > 1) {
            if(n % vetor[i] == 0)  {
                n /= vetor[i];
                valores[c] = vetor[i];
                c++;
            } else {
                i++;
            }
        }
        print(valores);
    return;
}

int main() {
    int n = 165258;
    int vetor[200];
    get_primos(vetor);
    verifica_multiplos(vetor, n);
    return 0;
}