//
// Created by Ignorant on 2023/12/5.
//

#include <stdio.h>
#include <stdlib.h>

double Poland();
int main() {
    printf("%f", Poland());
    return 0;
}

double Poland() {
    char input[320] = {0};
    scanf("%s", input);
    switch (input[0]) {
        case '+':
            return Poland() + Poland();
        case '-':
            return Poland() - Poland();
        case '*':
            return Poland() * Poland();
        case '/':
            return Poland() / Poland();
        default:
            return atof(input);
    }
}
