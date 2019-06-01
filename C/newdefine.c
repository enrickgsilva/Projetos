#include <stdio.h>

#define PI 3.14159
#define NULO 0

double area_ciculo(double raio) {
    return raio * raio * PI;
}

int main(void) {
    double r;   
    int i = 3;

    while(i != NULO) {
        printf("Digite o raio do circulo:");
        scanf("%lf", &r);
        printf("A area do circulo e %lf\n\n", area_ciculo(r));
        --i;
    }

    system("pause");
    return 0;
}