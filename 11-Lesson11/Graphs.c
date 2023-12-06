//
// Created by Ignorant on 2023/12/5.
//

#include <stdio.h>
#include <math.h>
#define PI 3.1415926
struct Line {
    double x1;
    double y1;
    double x2;
    double y2;
};

struct Rect {
    double x;
    double y;
    double width;
    double height;
};

struct Circle {
    double x;
    double y;
    double radius;
};

union Graph {
    struct Line line;
    struct Rect rect;
    struct Circle circle;
};

int main() {
    union Graph graphs[100];
    int key = 0;
    int index = 0;
    int countLine = 0;
    int countRect = 0;
    int countCircle = 0;
    while ((scanf("%d", &key)) != EOF) {
        switch (key) {
            case 0:
                countLine++;
                printf("Please give the coordinates of the start and the end of the line:\n");
                scanf("%lf%lf%lf%lf", &graphs[index].line.x1, &graphs[index].line.y1, &graphs[index].line.x2, &graphs[index].line.y2);
                printf("Line%0.2d: { from:(%.2f, %.2f) to:(%.2f, %.2f) ;length: %.2f }\n", countLine, graphs[index].line.x1,
                       graphs[index].line.y1, graphs[index].line.x2, graphs[index].line.y2,
                       sqrt(pow(graphs[index].line.x1 - graphs[index].line.x2, 2) + pow(graphs[index].line.y1 - graphs[index].line.y2, 2)));
                break;
            case 1:
                countRect++;
                printf("Please give the coordinate of the top left corner of the rectangle:\n");
                scanf("%lf%lf", &graphs[index].rect.x, &graphs[index].rect.y);
                printf("Please give the width and the height of the rectangle:\n");
                scanf("%lf%lf", &graphs[index].rect.width, &graphs[index].rect.height);
                printf("Rectangle%0.2d: { from:(%.2f, %.2f) to:(%.2f, %.2f) ;area: %.2f }\n", countRect,
                       graphs[index].rect.x, graphs[index].rect.y, graphs[index].rect.x + graphs[index].rect.width,
                       graphs[index].rect.y + graphs[index].rect.height, graphs[index].rect.width * graphs[index].rect.height);
                break;
            case 2:
                countCircle++;
                printf("Please give the coordinate of the center of the circle:\n");
                scanf("%lf%lf", &graphs[index].circle.x, &graphs[index].circle.y);
                printf("Please give the radius of the circle:\n");
                scanf("%lf", &graphs[index].circle.radius);
                printf("Circle%0.2d: { center(%.2f, %.2f) ;area: %.2f }\n", countCircle,
                       graphs[index].circle.x, graphs[index].circle.y, PI * pow(graphs[index].circle.radius, 2));
                break;
            default:
                printf("Invalid Input!\n");
                continue;
        }
        index++;
    }
    return 0;
}
