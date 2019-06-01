#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};

struct lista *procurar_valor(struct lista *pointer_lista, int elemento) { 
 /*função que rece um ponteiro e retorna um ponteiro*/
    while(pointer_lista != (struct lista *) 0) { //se o ponteiro for nulo o laço acaba
        if(pointer_lista->valor == elemento) {
            return(pointer_lista);
        } else {
            pointer_lista = pointer_lista->proximo;
        }
    }
    return(struct lista *) 0;
}

int main(void) {
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int elemento;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = 0;

    printf("Digite o valor da pesquisa: ");
    scanf("%i", &elemento);

    resultado = procurar_valor(gancho, elemento);

    if(resultado == (struct lista *) 0) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Valor %i encontrado.\n", resultado->valor);
    }

    system("pause");
    return 0;
}