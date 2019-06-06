#include <stdio.h>
#include <math.h>

void numero_primo(int n) {
    int i;
    for(i = 2; i <= sqrt(n); i++) { //verifica se o número é primo
        if(n % 2 == 0) {
            printf("O numero nao e primo!\n");
            return;
        }
    }
    printf("O numero e primo!\n");
    return;
}


int main() {
    unsigned long long n;
    scanf("%d", &n);
    numero_primo(n);
    return 0;
}