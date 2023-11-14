//
// Created by Ignorant on 2023/9/26.
//


#include <math.h>
#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double x1;
    double x2;
    double delta = b * b - 4 * a * c;
    if (a != 0) {
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %f, x2 = %f", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("x1 = x2 = %f", x1);
        } else {
            delta = -delta;
            x1 = -b / (2 * a);
            x2 = sqrt(delta) / (2 * a);
            printf("x1 = %f + %fi, x2 = %f - %fi", x1, x2, x1, x2);
        }
    } else {
        printf("This is not a quadratic equation");
    }
    return 0;
}
