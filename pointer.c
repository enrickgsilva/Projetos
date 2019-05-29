#include <stdio.h>
int soma(int a, int b) { return a + b; }
int multiplica(int a, int b) { return a * b; }

typedef int (*Operacao)(int, int);

int opera(int a, int b, Operacao op) {
    return op(a, b);
}

int main() {
    printf("%d\n", opera(3, 4, soma));
    printf("%d\n", opera(3, 4, multiplica));
    return 0;
}