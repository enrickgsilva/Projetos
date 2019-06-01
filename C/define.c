#include <stdio.h>
 
 /*usando define em C*/
#define SIM 100
#define NAO -100

int main(void) {
    int x;
    printf("Digite um numero inteiro:");
    scanf("%d", &x);

    if(x <= 10) {
        printf("%i\n", NAO);
    } else {
        printf("%i\n", SIM);
    }

    system("pause");
    return 0;
}