//
// Created by Ignorant on 2023/9/8.
//


#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
//    printf("Please input a number.\n");
//    scanf("%d",&a);
//    printf("Please input another number.\n");
//    scanf("%d",&b);
//    printf("The result is %d", a + b);
    scanf("%d %d", &a, &b);
    /*
     * function: scanf("<格式化字符串>", <地址>)
     * 函数原型：
     *  int scan(const char *format, ...);
     */
    printf("%d", a + b);
    return 0;
}
