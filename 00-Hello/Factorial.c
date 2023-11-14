//
// Created by Ignorant on 2023/9/8.
//

#include <stdio.h>

long long fac(int n);  //函数声明：函数的调用在定义点前，需要先声明

int main() {
    printf("%lld\n", fac(7));
    return 0;
}

long long fac(int n) {
    if (n == 0) {
        return 1LL;
    }
    return 1LL * n * fac(n - 1);
}