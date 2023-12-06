//
// Created by Ignorant on 2023/12/5.
//

#include <stdio.h>
struct Date {
    int year;
    int month;
    int day;
};
struct Student {
    int id;
    char *name;
    int age;
    char gender;
    double score;
    struct Date birthday;
};

void Modify(struct Student student);
int BinarySearchById(const struct Student *students, int length, int target);
void BubbleSortByScore(struct Student *students, int length);
int main() {
    struct Date birthday = {2005, 7, 4};
    struct Student student1 = {231880174, "Carl", 18, 'M', 90, birthday};
    struct Student student2 = {231880175, "Tom", 20, 'M', 80, {2003, 12, 5}};
    struct Student student3 = {231880176, "Jerry", 25, 'M', 100, {1998, 5, 2}};
    struct Student student4 = {231880177, "Merry", 18, 'F', 95, {2005, 5, 16}};
    struct Student student5 = {231880178, "Jack", 32, 'M', 85, {1992, 10, 20}};
    struct Student students[5] = {student1, student2, student3, student4, student5};

    printf("%llu\n", sizeof birthday);
    printf("%llu\n", sizeof student1);
    printf("%s: %.2f\n", student1.name, student1.score);
    Modify(student1);
    printf("%s: %.2f\n", student1.name, student1.score);

    printf("%d\n", BinarySearchById(students, 5, 231880177));
    BubbleSortByScore(students, 5);

    for (int i = 0; i < 5; i++) {
        printf("student%d:{ id: %d, name: %s, age: %d, gender: %c, score: %.2f, birthday: %d-%0.2d-%0.2d }\n",
               i + 1, students[i].id, students[i].name, students[i].age, students[i].gender, students[i].score,
               students[i].birthday.year, students[i].birthday.month, students[i].birthday.day);
    }
    return 0;
}
void Modify(struct Student student) {
    student.name = "Jerry";
    student.score = 100;
    printf("%s: %.2f\n", student.name, student.score);
}
int BinarySearchById(const struct Student *students, int length, int target) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if (students[mid].id < target) {
            left = mid;
        } else if (students[mid].id > target) {
            right = mid;
        } else {
            return mid;
        }
    }
    return -1;
}
void BubbleSortByScore(struct Student *students, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (students[j].score > students[j + 1].score) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
