//
// Created by Ignorant on 2023/11/14.
//

#include <stdio.h>

void Swap(int *pm, int *pn);
int main() {
    int m = 5;
    int n = 9;
    Swap(&m, &n);
    printf("%d %d", m, n);
    return 0;
}

void Swap(int *pm, int *pn) {
    int temp = *pm;
    *pm = *pn;
    *pn = temp;
}
