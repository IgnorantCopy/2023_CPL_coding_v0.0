//
// Created by Ignorant on 2023/10/24.
//

#include <stdio.h>

int factorial(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

int factorial(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        num *= i;
    }
    return num;
}
