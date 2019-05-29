#include <stdio.h>

double integral(double (*f)(double x), double a, double b) {
    double sum, dt;
    int i;

    sum = 0.0;
    dt = (b - a) / 100.0;
    for(i = 0; i < 100; i++)
        sum += (*f)(i * dt +a) * dt;

    printf("A soma atual e %f\n", sum);
        return sum;
}

double square(double x) {
    //printf("Square: %f\n", x);
    return x * x;
}

double cube(double x) {
    //printf("Cube: %f\n", x);
    return x * x * x;
}

int main() {
   
    printf("Integral = %lf\n", integral(square, 2, 3));
    printf("Integral = %lf\n", integral(cube, 2, 3));
    return 0;
}