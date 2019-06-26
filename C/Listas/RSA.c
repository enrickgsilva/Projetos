#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    char *mensagem;
    system("cls");
    scanf("%s[^x]s", &mensagem);
    printf("%s", &mensagem);
    return 0;
}