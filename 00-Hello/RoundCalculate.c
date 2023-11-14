//
// Created by Ignorant on 2023/9/12.
//

#include <stdio.h>

//宏定义：定义 PI 为全局变量
#define PI 3.14

int main() {
    int n;
    double sum = 0;
    char ch = 'm';
    printf("Input n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += PI * i;
    }
    printf("sum = %f", sum);
    putchar(ch);  //显示单位
    return 0;
}
