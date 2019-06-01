#include <stdio.h>

/*funções da calculadora*/
int subtrair(int a, int b) {
    return (a - b);
}
int somar(int a, int b) {
    return (a + b);
}

int dividir(int a, int b) {
    return (a / b);
}

int multiplicar(int a, int b) {
    return (a * b);
}

int fatorial(int a, int b) {
    if(a == 1) {
        return 1;
    } else {
        return (a * fatorial(a-1, b));
    }
}
/*funções da calculadora*/

void map(int (*function)(int, int), int a, int b) { /*função de mapeamento*/
    int i;
    int resultado = function(a, b);
    printf("O resultado foi %d\n", resultado);
    sleep(3);
    system("cls");
    return;
}

int main() {
    int a, b;
    int op;

    printf("Digite o valor de acordo com a operacao que deseja fazer!\n");

    do {
        printf("1 = soma, 2 = subtracao, 3 = multiplicacao, 4 = divisao, 5 = fatorial\n\n");
        scanf("%d", &op);
        system("cls"); 
        if(op == 1) {
            printf("Digite o primeiro numero\n");
            scanf("%d", &a);
            printf("Digite o segundo numero\n");
            scanf("%d", &b);
            map(somar, a, b);
        } else if(op == 2) {
            printf("Digite o primeiro numero\n");
            scanf("%d", &a);
            printf("Digite o segundo numero\n");
            scanf("%d", &b);
            map(subtrair, a, b);
        } else if(op == 3) {
            printf("Digite o primeiro numero\n");
            scanf("%d", &a);
            printf("Digite o segundo numero\n");
            scanf("%d", &b);
            map(multiplicar, a, b);
        } else if(op == 4) {
            printf("Digite o primeiro numero\n");
            scanf("%d", &a);
            printf("Digite o segundo numero\n");
            scanf("%d", &b);
            map(dividir, a, b);
        } else if(op == 5) {
            printf("Digite o primeiro numero\n");
            scanf("%d", &a);
            printf("Digite o segundo numero\n");
            scanf("%d", &b);
            map(fatorial, a, b);
        } else {
            break;
        }
    }while(1);

    return 0;
}