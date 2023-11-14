//
// Created by Ignorant on 2023/10/24.
//

#include <stdio.h>

double power(double a, int n);

int main() {
    int n = 0;
    double a = 0;
    scanf("%d%lf", &n, &a);
    printf("%f", power(a, n));
    return 0;
}

double power(double a, int n) {
    double num = 1;
    for (int i = 0; i < n; i++) {
        num *= a;
    }
    return num;
}
