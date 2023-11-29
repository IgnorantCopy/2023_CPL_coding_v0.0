//
// Created by Ignorant on 2023/11/29.
//

#include <stdio.h>
#include <string.h>
#define PASSWORD "ignorant"

int main() {
    const int chance = 3;
    char input[25] = {0};
    int isCorrect = 0;
    for (int i = 0; i < chance; i++) {
        printf("Please enter the password:\n");
        scanf("%25s", input);
        if (strcmp(input, PASSWORD) == 0) {
            printf("Your password is correct!\n");
            isCorrect = 1;
            break;
        } else {
            printf("Try again!\n");
        }
    }
    if (!isCorrect) {
        printf("Error...");
    }
    return 0;
}
