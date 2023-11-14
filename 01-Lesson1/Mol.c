//
// Created by Ignorant on 2023/9/14.
//

/*
 * 求6克氧气的物质的量
 * 要求:
 *  ①结果用科学计数法表示
 *  ②第一行小数点保留3位
 *  ③第二行保留5位有效数字
 */
#include <stdio.h>

#define NA 6.02e23
#define MOL_PRE_GRAM 32

int main() {
    int mass = 6;
    double quantity = mass * 1.0 / MOL_PRE_GRAM * NA;
    printf("quantity = %.3e\nquantity = %.5g", quantity, quantity);
    //%e:exponent/科学计数法 ; %g:significant digits/科学计数法+有效数字(姑且这么认为)
    return 0;
}
