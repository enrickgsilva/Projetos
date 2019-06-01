#include <stdio.h>

#define MAIOR(x, y) x > y ? x : y //macro com o uso do operador ternario
#define MINUSCULO(char) char >= 'a' && char <= 'z' //se for uma letra minuscula retorna true, se n false

int main(void) {

    char x = 'A';

    if(MINUSCULO(x)) {
        printf("Minusculo!\n");
    } else {
        printf("Maiuscula\n");
    }

    printf("%i\n", MAIOR(10, 50)); //verifica o macro MAIOR através dos operadores ternários

    system("pause");
    return 0;
}