#include <stdio.h>
#include <stdlib.h>

struct node{ /*Estrutura que percorre a lista encadeada*/
    int item;
    struct node *next;
};

struct node* create_linked_list() { /*Cria o primeiro nó Nulo*/
    return NULL;
}

struct node* add(struct node *head, int item) { /*Adiciona novos nós e elementos a lista*/
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}

struct node* display(struct node *head) { /*Mostra todos os itens da lista*/
    while(head != NULL) {
        printf("%d\n", head->item);
        head = head->next;
    }
    return;
}

int main() {
    struct node* list = create_linked_list();

    list = add(list, 3);
    list = add(list, 9);
    list = add(list, 27);
    list = add(list, 81);
    list = add(list, 243);

    return 0;
}