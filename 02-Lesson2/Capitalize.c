//
// Created by Ignorant on 2023/9/19.
//

#include <stdio.h>

int main() {
    char letter;
    printf("Please input a capitalized letter:");
    scanf("%c", &letter);
    if (letter >= 'A' && letter <= 'Z') {
        letter += 32;
        printf("%c\n", letter);
    }
    return 0;
}
