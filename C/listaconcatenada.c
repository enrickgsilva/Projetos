#include <stdio.h>

int main(void) {

    struct lista {
        int valor;
        struct lista *proximo;
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;
    //m3.proximo = NULL;
    //m3.proximo = 0;

    while(gancho != (struct lista *)0) {
        printf("%i\n", gancho->valor); //gancho aponta para o valor
        gancho = gancho->proximo; //gancho aponta para o proximo
    }
    getchar();
    return 0;
}
/* struct lista *gancho aponta para endereço de &m1 
   na primeira volta do while ele vai apontar para m1 e mostrar o valor de m1 na linha 22
   após isso ele aponta para o ponteiro struct lista *proximo
   o struct lista *proximo de m1 foi definido como endereço de m2 na linha 17
   na segunda volta do while o gancho vai apontar para o endereço de m2 e mostrar o valor de m2 linha 22
   após isso a struct lista *proximo que estava em m2 vai apontar para o endereço de m3
   no endereço de m3 vai imprimir o valor 30
   depois disso gancho se torna o struct *proximo de m2 que é o endereço de m3
   e vai executar novamente
   até quando o gancho apontar para o endereço de m3, imprimir o valor e chegar no struct lista *proximo
   e ver que o próximo é um valor nulo, encerrando o programa.
   lembrando que o programa poderia ter a linha
   ou 19, ou 20, ou 21
*/