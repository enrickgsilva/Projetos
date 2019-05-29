#include <stdio.h>

void main(void) {
    int x = 5;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;
    printf("%p\n", p2);
    printf("%p\n", p1);
    printf("%d\n", *p1);
}