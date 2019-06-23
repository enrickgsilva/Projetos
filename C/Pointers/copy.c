#include <stdio.h>
#include <stdlib.h>

void copiar_string(char *copiar, char *colar) {
    while(*copiar != '\0') {
        *colar = *copiar;
        ++copiar;
        ++colar;
    }
    *colar = '\0';
    return;
}

int main() {
    char string1[] = "Pao com mortadela";
    char string2[20];

    copiar_string(string1, string2);
    printf("%s", string2);
    return 0;
}