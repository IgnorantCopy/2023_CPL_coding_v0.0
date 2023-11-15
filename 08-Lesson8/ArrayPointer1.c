//
// Created by Ignorant on 2023/11/15.
//

#include <stdio.h>
#define N 10

int main() {
    int i;
    int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int const *pa;
    // 下标法
    for (pa = a, i = 0; i < N; i++) {
        printf("%d ", pa[i]);
    }
    printf("\n");
    // 指针移动法
    for (; pa < (a + N); pa++) {
        printf("%d ", *pa);
    }
    printf("\n");
    // 偏移量法
    for (pa = a, i = 0; i < N; i++) {
        printf("%d ", *(pa + i));
    }
    return 0;
}
