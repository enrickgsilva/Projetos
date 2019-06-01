#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio * raio * PI //raio é um termo onde (raio) vai ser o valor que vai ser inserido

int main(void) {

    printf("%f\n", PI);
    printf("%f\n", DOIS_PI);
    printf("%f\n", AREA_CIRCULO(5.4));
    
    getchar();
    return 0;
}