#include <stdio.h>

struct gol {
    char nome[30];
    int cpf;
    int idade;
    int telefone;
    int ticket;
};

int main() {
    int n;
    printf("Numero de passageiros: ");
    scanf("%d", &n);
    system("cls");
    struct gol passageiro[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o nome do passageiro: ");
        scanf("%s", passageiro[i].nome);
        printf("\n");
        printf("CPF do passageiro: ");
        scanf("%d", passageiro[i].cpf);
        printf("\n");
        printf("Idade do passageiro: ");
        scanf("%d", passageiro[i].idade);
        printf("\n");
        printf("Telefone do passageiro: ");
        scanf("%d", passageiro[i].telefone);
        printf("\n");
        printf("Ticket do passageiro: ");
        scanf("%d", passageiro[i].ticket);
        printf("\n");
    }

    for(int i = 0; i < n; i++) {
        printf("Nome: %s\n", passageiro[i].nome);
        printf("CPF: %s\n", passageiro[i].cpf);
        printf("Idade: %d\n", passageiro[i].idade);
        printf("Telefone: %d\n", passageiro[i].telefone);
        printf("Ticket: %d\n", passageiro[i].ticket);
    }
    return 0;
}