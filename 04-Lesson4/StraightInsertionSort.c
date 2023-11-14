//
// Created by Ignorant on 2023/10/17.
//


#include <stdio.h>

int main() {
    int nums[4] = {5, 4, 0, 2};
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] < nums[j]) {
                int temp = nums[i];
                for (int k = i - 1; k >= 0; k--) {
                    nums[k + 1] = nums[k];
                }
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
