//
// Created by Ignorant on 2023/11/1.
//


#include <stdio.h>
#define PI 3.1415926

void MainMenu();

void Round();

void Sector();

void Rectangle();

void Rhomboid();

void Triangle();

void Trapezoid();

int main() {
    int flag1 = 1;
    while (flag1) {
        MainMenu();
        int key = 0;
        int flag2 = 1;
        char exit;
        scanf("%d", &key);
        printf("-------------------------------\n");
        switch (key) {
            case 1:
                Round();
                break;
            case 2:
                Sector();
                break;
            case 3:
                Rectangle();
                break;
            case 4:
                Rhomboid();
                break;
            case 5:
                Triangle();
                break;
            case 6:
                Trapezoid();
                break;
            case 7:
                while (flag2) {
                    printf("Are you sure to exit?(Y/N):");
                    getchar();
                    scanf("%c", &exit);
                    if (exit >= 'a' && exit <= 'z') {
                        exit -= 'a' - 'A';
                    }
                    if (exit == 'Y') {
                        flag2 = 0;
                        flag1 = 0;
                    } else if (exit == 'N') {
                        flag2 = 0;
                        flag1 = 1;
                    } else {
                        printf("Invalid Input!!!\n");
                    }
                }
                break;
            default:
                printf("Invalid Input!!!\n");
        }
    }
    return 0;
}

void MainMenu() {
    printf("-----Calculator of Graphs-----\n");
    printf("     1.round\n");
    printf("     2.sector\n");
    printf("     3.rectangle\n");
    printf("     4.rhomboid\n");
    printf("     5.triangle\n");
    printf("     6.trapezoid\n");
    printf("     7.exit\n");
    printf("Please make a choice:");
}

void Round() {
    double radius = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the radius:");
        scanf("%lf", &radius);
        if (radius < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of round is %f\n", PI * radius * radius);
}

void Sector() {
    double radius = 0;
    double angle = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the radius:");
        scanf("%lf", &radius);
        if (radius < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    flag = 1;
    while (flag) {
        printf("Please input the angle:");
        scanf("%lf", &angle);
        if (angle < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of sector is %f\n", 0.5 * (angle / 180 * PI) * radius * radius);
}

void Rectangle() {
    double a = 0;
    double b = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the two sides of rectangle:");
        scanf("%lf%lf", &a, &b);
        if (a < 0 || b < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of rectangle is %f\n", a * b);
}

void Rhomboid() {
    double x = 0;
    double h = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the base:");
        scanf("%lf", &x);
        if (x < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    flag = 1;
    while (flag) {
        printf("Please input the height:");
        scanf("%lf", &h);
        if (h < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of rhomboid is %f\n", x * h);
}

void Triangle() {
    double x = 0;
    double h = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the base:");
        scanf("%lf", &x);
        if (x < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    flag = 1;
    while (flag) {
        printf("Please input the height:");
        scanf("%lf", &h);
        if (h < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of rhomboid is %f\n", 0.5 * x * h);
}

void Trapezoid() {
    double a = 0;
    double b = 0;
    double h = 0;
    int flag = 1;
    while (flag) {
        printf("Please input the upper and lower bases:");
        scanf("%lf%lf", &a, &b);
        if (a < 0 || b < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    flag = 1;
    while (flag) {
        printf("Please input the height:");
        scanf("%lf", &h);
        if (h < 0) {
            printf("Invalid Input!!!\n");
        } else {
            flag = 0;
        }
    }
    printf("The area of trapezoid is %f\n", 0.5 * (a + b) * h);
}
