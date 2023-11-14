//
// Created by Ignorant on 2023/9/26.
//


#include <stdio.h>

int main() {
    int max;
    int a = 5;
    int b = 45;
    int c = 19;
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("The maximum is %d\n", max);
    return 0;
}
