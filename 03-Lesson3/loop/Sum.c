//
// Created by Ignorant on 2023/10/10.
//

//计算从键盘输入的n个正整数的和,当输入负数或0时直接pass,直到输入n个为止开始计算和

#include <stdio.h>

int main() {
    int n = 0;
    int num = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
        }
    }
    printf("%d", sum);
    return 0;
}
