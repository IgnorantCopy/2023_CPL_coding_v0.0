//
// Created by Ignorant on 2023/10/11.
//

#include <stdio.h>

/*
 * 路边设置一车辆探测器，探测器用线路连接到计算机，
 * (a) 当有车辆通过时，探测器传送信号1给计算机，
 * (b) 探测器中有一计时器，每秒钟发出一个数字信号2传给计算机，
 * (c) 探测结束时传递一个数字信号0给计算机
 * 编写程序读入这一系列的信号并输出：
 *  ① 进行了多长时间的统计调查？
 *  ② 记录到的车辆数？
 *  ③ 在车辆之间最长的时间间隔是多少？
 */

int main() {
    int time = 0;
    int nums = 0;
    int longest = 1;
    int isTwo = 0;
    int signal;
    scanf("%d", &signal);
    while (signal != 0) {
        if (signal == 1) {
            nums++;
            isTwo = 0;
        } else if (signal == 2) {
            time++;
            isTwo++;
            longest = longest > isTwo ? longest : isTwo;
        }
        scanf("%d", &signal);
    }
    printf("seconds:%d s\n"
            "There are %d cars\n"
            "The longest time interval is %d s",
            time, nums, longest);
    return 0;
}
