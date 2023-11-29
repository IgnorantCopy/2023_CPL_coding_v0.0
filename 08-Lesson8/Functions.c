//
// Created by Ignorant on 2023/11/21.
//

#include "stdio.h"
#include "math.h"

int main() {
    typedef double (*PF)(double);
    PF functions[8] = {sin, cos, tan, asin, acos, atan, log, log10};
    int key = 0;
    double num = 0;
    scanf("%d%lf", &key, &num);
    printf("%f\n", (*functions[key % 8])(num));
    return 0;
}
