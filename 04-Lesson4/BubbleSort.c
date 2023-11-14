//
// Created by Ignorant on 2023/10/17.
//


#include <stdio.h>

int main() {
    int nums[4] = {5, 4, 0, 2};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j] ^ nums[j + 1];
                nums[j + 1] = nums[j] ^ nums[j + 1];
                nums[j] = nums[j] ^ nums[j + 1];
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
