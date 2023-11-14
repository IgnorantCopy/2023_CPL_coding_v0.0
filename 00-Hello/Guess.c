//
// Created by Ignorant on 2023/9/8.
//


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max = 100;
    int min = 0;
    bool flag = true;
    bool flag_in = true;

    while (flag) {
        int guess = 0;
        flag = true;
        flag_in = true;
        int numberOfTries = 7;
        //1.print the rules of the game to players
        printf("Let us play the Guess the Number Game.\n"
                "The computer will generate a number between %d and %d.\n"
                "You have %d tries.\n", min, max, numberOfTries);
        //2.generate a random number between min and max as the secret number
        srand(time(NULL));
        int secret = rand() % max + min;
        printf("Test: secret = %d.\n", secret);
        //5.loop: until the player wins or loses
        while (numberOfTries > 0) {
            //3.ask the player to input a guess
            printf("PLease input your guess.\n"
                    "You still have %d tries.\n", numberOfTries);
            scanf("%d", &guess);
            //4.obtain the guess number, compare it with the secret number, and inform the player of the result
            printf("Your guess is %d.\n", guess);
            if (guess == secret) {
                printf("You Win!\n");
                break;
            } else if (guess > secret) {
                printf("guess > secret\n");
            } else {
                printf("guess < secret\n");
            }
            numberOfTries--;
        }
        if (numberOfTries == 0) {
            printf("You lose!\n");
        }
        while (flag_in) {
            printf("Would you like to play again?(Y/N):");
            char key;
            key = getchar();
            switch (key) {
                case 'Y':
                    flag_in = false;
                    break;
                case 'N':
                    flag_in = false;
                    flag = false;
                    break;
                default:
                    printf("The format of your input is wrong! Please input again.\n");
            }
        }
    }
    return 0;
}
