#include <stdio.h>
#include <stdlib.h>

typedef struct Node { /*Estrutura que controla todos os nós da lista*/
    int valor;
    struct Node *next;
}node;

node *linearsearch(node *head, int valor) { /*linear search da lista encadeada*/
    while(head !=  NULL) {
        if(head->valor == valor) {
            return head; /*Se encontar  retorna o valor*/
        } else {
            head = head->next;
        }
    }
    return NULL; /*Caso não encontre o valor retorna Nulo*/
}

node* createlist() { /*Criação da lista inicial*/
    return NULL;
}

node *add(node *head) { /*Adiciona novos nós a lista*/
    int x;
    node *new_node = (node*) malloc(sizeof(node));
    printf("Digite o valor para adicionar a lista: ");
    scanf("%i", &x);
    new_node->valor = x;
    new_node->next = head;
    return new_node;
}

int main(void) {
    node *list = createlist();
    node *resultado;
    int valor, n;

    printf("Quantos valores voce quer adicionar a sua lista? ");
    scanf("%i", &n);

    for(int i = 0; i < n; i++) {
        list = add(list);
    }

    printf("Digite o valor da pesquisa: ");
    scanf("%i", &valor);

    resultado = linearsearch(list, valor);

    if(resultado == NULL) {
        printf("Elemento nao encontrado!\n");
    } else {
        printf("Elemento %i encontrado na lista!\n", valor);
    }

    return 0;
}