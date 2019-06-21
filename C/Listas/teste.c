#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define size 2

typedef struct { /*Estrutura do tipo aluno*/
    char nome[30];
    int idade;
    int matricula;
    int telefone;
}Aluno;

void read(Aluno *lista) { /*Função que lê as informações dos alunos*/
    int i;
    for(i = 0; i < size; i++) {
       printf("Digite o nome do aluno %d: ", i+1);
       scanf("%s", lista[i].nome);
       printf("\n");
       printf("Digite a idade do %s: ", lista[i].nome);
       scanf("%d", &lista[i].idade);
       printf("\n");
       printf("Digite o numero de matricula do %s: ", lista[i].nome);
       scanf("%d", &lista[i].matricula);
       printf("\n");
       printf("Digite o telefone do %s: ", lista[i].nome);
       scanf("%d", &lista[i].telefone);
       system("cls");
       printf("\nALuno numero %d cadastrado!", i+1);
       Sleep(1000);
       system("cls");
    }
    return;
}

void display(Aluno *lista) { /*Mostra uma lista dos alunos*/
    int i;
    for(i = 0; i < size; i++) {
        printf("\tAluno %d:\n", i+1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Matricula: %d\n", lista[i].matricula);
        printf("Telefone: %d\n", lista[i].telefone);
        printf("\n");
    }
    return;
}

int main() {
    system("cls");
    Aluno lista[size];
    read(lista);
    display(lista);
    return 0;
}