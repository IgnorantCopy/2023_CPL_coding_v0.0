//
// Created by Ignorant on 2023/9/20.
//

/*
 * Array:
 *  1.definition:用以表示确定个数的同类型数据按一定次序构成的数据群体
 *  2.explanation
 *      ①对于数组类型的数据,编译器在内存中分配连续的空间来存储数组元素
 *      ②通常情况下,对数组不能进行整体操作
 */

#include <stdio.h>

int main() {
    //ways of definition
    //1.先构造类型,再定义变量
    typedef int A[6];
    A a;
    A b;
    //2.构造类型的同时定义变量
    int arr[6];

    //char array
    //initialize
    char str[10] = {'s', 't', 'r', '\0'};
    char array[10] = "Hello";
    //input anf output: scanf and printf
    for (int i = 0; i < 4; i++) {
        printf("%c\n", str[i]);
    }
    //sizeof(<类型名/变量名>): return the space the object occupied
    printf("%d\n", sizeof(str));

    //the operation of string
    //gets() and puts()
    char *string;
    gets(string);
    puts(string);
    return 0;
}
