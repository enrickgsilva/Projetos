#include <stdio.h>

int main() {
    int x = 2147483660;
    int y = -2147483680;

    short a = 2147483660;
    short b = -2147483680;

    long int f = 2147483660;
    long int s = -2147483680;

    printf("%i\n", x);
    printf("%i\n", y);

    getchar();
    return 0;
}