//
// Created by Ignorant on 2023/11/21.
//

#include <stdio.h>

double Function(double x);

double Integrate(double (*pf)(double x), double a, double b);
int main() {
    printf("%f", Integrate(Function, 0, 10));
    return 0;
}

double Function(double x) {
    return 3 * x * x;
}

double Integrate(double (*pf)(double x), double a, double b) {
    double sum = 0;
    int precision = 0;
    scanf("%d", &precision);
    double delta = (b - a) / precision;
    while (a <= b) {
        sum += (*pf)(a) * delta;
        a += delta;
    }
    return sum;
}
