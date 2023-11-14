//
// Created by Ignorant on 2023/9/26.
//


#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b || a == c || b == c) {
            if (a == b && a == c) {
                printf("equilateral triangle\n");
            } else {
                printf("isosceles triangle\n");
            }
        } else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            printf("right triangle\n");
        } else {
            printf("else\n");
        }
    } else {
        printf("this is not a triangle\n");
    }
    return 0;
}

