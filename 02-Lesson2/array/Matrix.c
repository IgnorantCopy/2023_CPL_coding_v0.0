//
// Created by Ignorant on 2023/9/27.
//


#include <stdio.h>

int main() {
    int m1[3][4] = {{1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3}};
    int m2[4][2] = {{4, 4},
                    {5, 5},
                    {6, 6},
                    {7, 7}};
    int m3[3][2];
    int num = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 4; k++) {
                num += m1[i][k] * m2[k][j];
            }
            m3[i][j] = num;
            printf("%d\t", num);
            num = 0;
        }
        printf("\n");
    }
    return 0;
}
