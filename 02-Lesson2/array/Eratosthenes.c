//
// Created by Ignorant on 2023/9/27.
//


#include <stdbool.h>
#include <stdio.h>

int main() {
    bool flag[101];
    for (int i = 0; i < 101; i++) {
        flag[i] = true;
    }
    for (int i = 2; i < 101; i++) {
        if (flag[i]) {
            printf("%d\n", i);
        }
        for (int m = 2 * i; m < 101; m += i) {
            flag[m] = false;
        }
    }
    return 0;
}
