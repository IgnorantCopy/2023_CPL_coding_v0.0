//
// Created by Ignorant on 2023/9/14.
//

#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[10];
    char gender;
    int birthYear = 2005;
    int birthMonth = 7;
    int birthDay = 4;
    char weekday[10];
    int cScore = 90;
    int musicScore = 60;
    int medicineScore = 95;

    scanf("%9s %c", name, &gender);  //the name of array refers to an address itself, so we needn't use '&'

    double mean = (cScore + musicScore + medicineScore) / 3.0;
    double standardDeviation = sqrt((pow(cScore - mean, 2) + pow(musicScore - mean, 2)
                                     + pow(medicineScore - mean, 2)) / 3.0);
    int rank = 10;
    printf("%s \t %c\n%d-%d-%d \t %.3s.\nC = %d \t Music = %d \t Medicine = %d\nMean = %.1f \t SD = %.2f \t Rank = %d%%\n",
           name, toupper(gender), birthYear, birthMonth, birthDay, weekday, cScore, musicScore, medicineScore, mean,
           standardDeviation, rank);
    return 0;
}
