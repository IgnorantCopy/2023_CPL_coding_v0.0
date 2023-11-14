//
// Created by Ignorant on 2023/10/17.
//


#include <stdio.h>

int main() {
    char alphas[12] = {'a', 'b', 'd', 'f', 'g',
                        'h', 'j', 'k', 'l', 's', 't'};
    int low = 0;
    int high = 10;
    int mid = (low + high) / 2;
    char key = 'k';
    while (low <= high) {
        if (alphas[mid] == key) {
            printf("%d", mid);
            break;
        } else if (alphas[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    return 0;
}
