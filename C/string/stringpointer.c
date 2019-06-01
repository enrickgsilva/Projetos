#include <stdio.h>

void copiar_string(char *copiar, char *colar) {

    while(*copiar != '\0') { /*laço para copiar uma string*/
        *colar = *copiar;
        ++copiar;
        ++colar;
    }
}

int main(void) {
    char string1[] = "Pao com mortadela";
    char string2[20]; //string que vai receber a string copiada
    copiar_string(string1, string2);
    printf("%s\n", string2);
    getchar();
}