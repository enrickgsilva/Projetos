#include <stdio.h> 
#include <stdlib.h>

typedef struct school {
    char nome[30];
    int matricula;
    int telefone;
    struct school *next;
}alunos;


alunos* create_list() { /*Criação da cabeça da lista*/
    return NULL;
}

alunos* add(alunos* head) { /*Função que adiciona um novo nó começo da lista*/
    int aux;
    alunos *new_alunos = (alunos*) malloc(sizeof(alunos));
    scanf("%d", &aux);
    new_alunos->matricula = aux;
    scanf("%d", &aux);
    new_alunos->telefone = aux;
    new_alunos->next = head;
    return new_alunos;
}

void print(alunos* head) { /*Função que printa uma lista encadeada*/
    while(head != NULL) {
        printf("Matricula: %d\n", head->matricula);
        printf("Telefone: %d\n", head->telefone);
        head = head->next;
    }
    return;
}

int main() {
    alunos* list = create_list(); /*Criação da lista encadeada*/

    list = add(list);
    list = add(list);

    print(list);
    return 0;
}