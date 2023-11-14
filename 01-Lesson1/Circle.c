//
// Created by Ignorant on 2023/9/13.
//

/*
 * Given a radius(say 10) of a circle, to compute its circumference and area
 * 要求：
 *  ①每个结果各占一行
 *  ②小数点后保留两位
 */

#include <stdio.h>

#define PI 3.14159
//or: const double PI = 3.14159;
//const: constant

int main() {
    int radius = 10;
    /*
     * The definition of variable
     *  int: the type of the variable
     *  radius: the name of the variable; radius refers to a location(&radius) in memory
     *  radius is initialized to 10
     *  you can assign another integer to radius
     */
    double circumference = 2 * PI * radius;
    /*
     * identifier(标识符):like radius, area and circumference
     * Warning:Don't start with _,which are reserved by C
     */
    double area = PI * radius * radius;
    printf("radius = %d\n", radius);  //%d:decimal
    printf("circumference = %.2f\narea = %.2f\n", circumference, area);
    return 0;
}
