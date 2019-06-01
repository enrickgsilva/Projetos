#include <stdio.h>

#define ALUNOS 1000
void uma_funcao(void) {
    printf("%i\n", ALUNOS);
}

void outra_funcao(void) {
    printf("%i\n", ALUNOS);
}

int main(void) {
    printf("%i\n",ALUNOS);
    uma_funcao();
    outra_funcao();

    system("pause");
    return 0;
}