//
// Created by Ignorant on 2023/11/29.
//


#include <stdio.h>
#include <ctype.h>

int GetLength(const char *string);
void Reverse(char *string);
void Count(const char *string);
void ToUpper(char *string);
void ToLower(char *string);
void ReverseUpperLower(char *string);
int ParseInt(const char *string);
void Strcpy(char *dest, const char *source);
void Strcat(char *dest, const char *source);
int Strcmp(const char *str1, const char *str2);
int main() {
    char str[100] = {0};
    char newStr[100] = {0};
    gets(str);
    char key = 0;
    scanf("%c", &key);
    switch (key) {
        case 'r':
            Reverse(str);
            break;
        case 'c':
            Count(str);
            break;
        case 'u':
            ToUpper(str);
            break;
        case 'l':
            ToLower(str);
            break;
        case 'b':
            ReverseUpperLower(str);
            break;
        case 'y':
            Strcpy(newStr, str);
            break;
        case 't':
            Strcat(newStr, str);
            break;
        case 'p':
            printf("%d\n", Strcmp(str, newStr));
            break;
    }
    return 0;
}
int GetLength(const char *string) {
    int count = 0;
    int index = 0;
    while (*(string + index) != '\0') {
        count++;
        index++;
    }
    return count;
}
void Reverse(char *string) {
    int len = GetLength(string);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = *(string + i);
        *(string + i) = *(string + j);
        *(string + j) = temp;
    }
    printf("%s\n", string);
}
void Count(const char *string) {
    int countSpace = 0;
    int countDigit = 0;
    int countAlpha = 0;
    int countOthers = 0;
    int len = GetLength(string);
    for (int i = 0; i < len; i++) {
        char key = *(string + i);
        if (key == ' ') {
            countSpace++;
        } else if (key >= '0' && key <= '9') {
            countDigit++;
        } else if (isalpha(key)) {
            countAlpha++;
        } else {
            countOthers++;
        }
    }
    printf("space = %d, digit = %d, alpha = %d, others = %d\n", countSpace, countDigit, countAlpha, countOthers);
}
void ToUpper(char *string) {
    int len = GetLength(string);
    for (int i = 0; i < len; i++) {
        if (*(string + i) >= 'a' && *(string + i) <= 'z') {
            *(string + i) -= 32;
        }
    }
}
void ToLower(char *string) {
    int len = GetLength(string);
    for (int i = 0; i < len; i++) {
        if (*(string + i) >= 'A' && *(string + i) <= 'Z') {
            *(string + i) += 32;
        }
    }
}
void ReverseUpperLower(char *string) {
    int len = GetLength(string);
    for (int i = 0; i < len; i++) {
        if (*(string + i) >= 'a' && *(string + i) <= 'z') {
            *(string + i) -= 32;
        } else if (*(string + i) >= 'A' && *(string + i) <= 'Z') {
            *(string + i) += 32;
        }
    }
}
int ParseInt(const char *string) {
    int len = GetLength(string);
    int result = 0;
    if (*string == '-') {
        for (int i = 1; i < len; i++) {
            result -= (*(string + i) - 48) * (len -i - 2);
        }
    } else {
        for (int i = 0; i < len; i++) {
            result += (*(string + i) - 48) * (len - i - 1);
        }
    }
    return result;
}
void Strcpy(char *dest, const char *source) {
    int index = 0;
    while (*(source + index) != '\0') {
        *(dest + index) = *(source + index);
        index++;
    }
    *(dest + index) = 0;
}
void Strcat(char *dest, const char *source) {
    int len1 = GetLength(dest);
    int len2 = GetLength(source);
    for (int i = len1; i <= len1 + len2; i++) {
        *(dest + i) = *(source + i - len1);
    }
}

int Strcmp(const char *str1, const char *str2) {
    int len1 = GetLength(str1);
    int len2 = GetLength(str2);
    int max = len1 > len2 ? len1 : len2;
    for (int i = 0; i < max; i++) {
        if (*(str1 + i) != *(str2 + i)) {
            return *(str1 + i) - *(str2 + i);
        }
    }
    return 0;
}
