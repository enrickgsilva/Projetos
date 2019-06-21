#include <stdio.h> /*Operações com structs e ponteiros*/

typedef struct horario {
    int hora;
    int minuto;
    int segundo;
}horario;

int main(void) {
    horario agora, *depois;
    depois = &agora;
    horario antes;

    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;

    printf("%i:%i\n", antes.hora, antes.minuto);
    printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);
    return 0;
}