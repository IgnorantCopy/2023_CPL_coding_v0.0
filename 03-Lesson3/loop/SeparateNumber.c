//
// Created by Ignorant on 2023/10/11.
//


#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int bit = 1;
    int number = num % 10;
    printf("%d\n", number);
    while (number != num) {
        num /= 10;
        number = num % 10;
        printf("%d\n", number);
        bit++;
    }
    printf("%d", bit);
    return 0;
}
