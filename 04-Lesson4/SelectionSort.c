//
// Created by Ignorant on 2023/10/17.
//


int main() {
    int nums[4] = {5, 4, 0, 2};
    int maxIndex;
    for (int i = 3; i > 0; i--) {
        maxIndex = 0;
        for (int j = 0; j < i; j++) {
            if (nums[maxIndex] < nums[j]) {
                maxIndex = j;
            }
        }
        nums[maxIndex] = nums[maxIndex] ^ nums[i - 1];
        nums[i - 1] = nums[maxIndex] ^ nums[i - 1];
        nums[maxIndex] = nums[maxIndex] ^ nums[i - 1];
    }
    return 0;
}
