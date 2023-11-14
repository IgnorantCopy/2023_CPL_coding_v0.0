//
// Created by Ignorant on 2023/9/26.
//

#include <stdio.h>

/*
 * 基本数据类型的转换:
 *  1.自动类型提升
 *      ①赋值操作:右操作数的类型转换为左边变量定义的类型
 *      ②逻辑操作和条件操作:非0转换为true,0转换为false
 *      ③其他双目操作:一般是低精度自动提升为高精度
 *      低  char, boolean, short --> int
 *      |  unsigned
 *      |  long
 *      |  unsigned long
 *      |  float
 *      高  long double
 *  2.强制类型转换:(type)
 */

int main() {
    //平时尽量强转
    int num = 4 % (int) 3.8;
    printf("%d\n", num);

    //实浮点类型的精度问题
    //example1
    double a = 3.3;
    double b = 1.1;
    int i = a / b;
    printf("%d\n", i);
    printf("%f\n", a / b);
    printf("%.17f\n", a / b);
    //example2
    float x = 0.1f;
    float y = 0.2f;
    float z = x + y;
    if (z == 0.3) {
        printf("z and 0.3 is equal");
    } else {
        printf("z and 0.3 is unequal,\nz is %.17f", z);
    }

    return 0;
}
