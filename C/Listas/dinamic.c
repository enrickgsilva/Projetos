#include <stdio.h> 
#include <stdlib.h>

typedef struct Node { /*Nó da lista*/
    int item;
    struct Node *next;
}node;

node* create_list() { /*Criação da cabeça da lista*/
    return NULL;
}

node* add(node* head, int item) { /*Função que adiciona um novo nó começo da lista*/
    node *new_node = (node*) malloc(sizeof(node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}

void print(node* head) { /*Função que printa uma lista encadeada*/
    while(head != NULL) {
        printf("%d\n", head->item);
        head = head->next;
    }
    return;
}

int main() {
    node* list = create_list(); /*Criação da lista encadeada*/

    list = add(list, 3);
    list = add(list, 9);
    list = add(list, 27);
    list = add(list, 81);
    list = add(list, 243);

    print(list);
    return 0;
}