//
// Created by Ignorant on 2023/10/10.
//

//每输入一个正整数,计算其阶乘,直到输入0为止

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        printf("%d", result);
        scanf("%d", &n);
    }
    return 0;
}