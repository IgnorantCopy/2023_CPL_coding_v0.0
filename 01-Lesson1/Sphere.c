//
// Created by Ignorant on 2023/9/14.
//

/*
 * Given a radius(say 100) of a sphere, to compute its surface area and volume.
 * 要求：
 *  ①每个结果各占一行
 *  ②小数点保留4位
 *  ③每个结果至少占15个字符，左对齐
 */

/*
 * printf格式化输出: %[flags][field width][.[precision]]specifier (参考 The Standard C Library Chapter 12 <stdio.h> P257~262)
 * 1.flags
 *  +:right justifies
 *  -:left justifies
 *  0:pads with leading zeros
 *  #:alters the behavior of conversions
 * 2.field width
 *  *: 形参占位符  e.g. ("%.*f", 10) == ("%.10f")
 * 3.precision
 * 4.specifier
 *  %a:浮点数、十六进制数字和 p-计数法(C99新特性)
 *  %c:字符(如果是Integer,返回ASCII码中对应的)
 *  %d:有符号的十进制整数
 *  %ld:long
 *  %hd:short
 *  %f:浮点数(float and double included)
 *  %Lf:long double
 *  %e:科学计数法
 *  %Le:long double
 *  %g:浮点数(不显示无意义的0)
 *  %Lg:long double
 *  %i == %d  %hi == %hd  %li == %ld
 *  %u:unsigned decimal
 *  %hu:unsigned short
 *  %lu:unsigned long
 *  %o:八进制整数
 *  %ho:unsigned short
 *  %lo:long
 *  %x:十六进制整数
 *  %hx:unsigned short
 *  %lx:unsigned long
 *  %p:pointer
 *  %s:字符串
 *  %%:'%'
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int radius = 100;
    double surfaceArea = 4 * PI * radius * radius;
    double volume;
    volume = 4.0 / 3 * PI * pow(radius, 3);
    printf("%-15.4f : surfaceArea\n%-15.4f : volume\n", surfaceArea, volume);
    //format: %x.yf x:minimum width/占位数(不足补空格) ; y:precision/保留小数位数(默认六位) ; -:flag(left-justified)
    return 0;
}
