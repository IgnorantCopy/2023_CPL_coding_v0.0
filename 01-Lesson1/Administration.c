//
// Created by Ignorant on 2023/9/14.
//

#include <math.h>
#include <stdio.h>
#include <ctype.h>

/*
 * 学生管理系统
 *  Name(EN)
 *  Gender(male/female)
 *  Birthday(mm-dd-yyyy)
 *  Weekday(Xyz.)
 *  Scores:
 *      C
 *      Music
 *      Medicine
 *  Mean(.d)
 *  Standard Deviation(.dd)
 *  Ranking(%)
 */

int main() {
    //char is actually an integer
    /*
     * '0' -- 48
     * 'A' -- 65
     * 'a' -- 97
     */
    char name[] = "Carl";  //'C' 'a' 'r' 'l' '\0'
    //A string is a null-terminated(\0) sequence of characters.
    //char name[>=5] = "Carl";
    char gender = 'm';
    int birthYear = 2005;
    int birthMonth = 7;
    int birthDay = 4;
    char weekday[] = "Thursday";
    int cScore = 90;
    int musicScore = 60;
    int medicineScore = 95;
    double mean = (cScore + musicScore + medicineScore) / 3.0;
    double standardDeviation = sqrt((pow(cScore - mean, 2) + pow(musicScore - mean, 2)
                                    + pow(medicineScore - mean, 2)) / 3.0);
    int rank = 10;
    printf("%s \t %c\n%.2d-%d-%d \t %.3s.\nC = %d \t Music = %d \t Medicine = %d\nMean = %.1f \t SD = %.2f \t Rank = %d\n",
            name, toupper(gender), birthYear, birthMonth, birthDay, weekday, cScore, musicScore, medicineScore, mean,
            standardDeviation, rank);  //toupper(<char>): 小写字母 --> 大写字母
    //%.2d:precision(不足补0) ; %.3s:string_precision
    return 0;
}

