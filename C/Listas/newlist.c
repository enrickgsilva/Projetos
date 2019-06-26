#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int item;
    struct Node *next;
}node;

node *createlist() {
    return NULL;
}

node *add(node *head, int item) {
    node *new_node  = (node*) malloc(sizeof(node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}

int main() {
    node *list = createlist();
    return 0;
}