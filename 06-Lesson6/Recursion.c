//
// Created by Ignorant on 2023/11/3.
//

#include <stdio.h>

int Fibonacci(int n);

void Hanno(char a, char b, char c, int n);

int Path(int n);

int Cow(int n);

int Stair(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Fibonacci(n));
    printf("--------------------\n");
    Hanno('A', 'B', 'C', n);
    printf("--------------------\n");
    printf("%d\n", Path(n));
    printf("--------------------\n");
    printf("%d\n", Cow(n));
    printf("--------------------\n");
    printf("%d\n", Stair(n));
    return 0;
}

int Fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void Hanno(char a, char b, char c, int n) {
    if (n == 1) {
        printf("1: %c --> %c\n", a, c);
    } else {
        Hanno(a, c, b, n - 1);
        printf("%d: %c --> %c\n", n, a, c);
        Hanno(b, a, c, n - 1);
    }
}

int Path(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return Path(n - 1) + Path(n - 2) + Path(n - 3);
    }
    return Path(n - 1) + Path(n - 2);
}

int Cow(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return 1;
    }
    return Cow(n - 1) + Cow(n - 3);
}

int Stair(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }
    return Stair(n - 1) + Stair(n - 2);
}

