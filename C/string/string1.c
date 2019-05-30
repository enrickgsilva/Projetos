#include <stdio.h>

int main() {
    char palavra1[] = {'E', 'n', 'r', 'i', 'c', 'k', ' '};
    char palavra2[] = {'G', 'o', 'n', 'c', 'a', 'l', 'v', 'e', 's'};
    char nova_palavra[16];

    int i, j;

    for(i = 0; i < 7; i++) {
        nova_palavra[i] = palavra1[i];
    }
    
    for(j = 0; j < 9; j++) {
        nova_palavra[i] = palavra2[j];
        i++;
    }

    for(i = 0; i < 16; i++) {
        printf("%c", nova_palavra[i]);
    }
    printf("\n");
    
    return 0;
}