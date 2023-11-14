//
// Created by Ignorant on 2023/10/17.
//

#include <stdio.h>

int split(int arr[], int left, int right);

void quickSort(int arr[], int left, int right);

int main() {
    int nums[4] = {5, 4, 0, 2};
    int left = 0;
    int right = 3;
    quickSort(nums, left, right);
    for (int i = 0; i < 4; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

void quickSort(int *arr, int left, int right) {
    if (left < right) {
        int index = split(arr, left, right);
        quickSort(arr, left, index - 1);
        quickSort(arr, index + 1, right);
    }
}

int split(int *arr, int left, int right) {
    int index = left;
    int pivot = arr[left];
    for (int i = left + 1; i <= right; i++) {
        if (arr[i] < pivot) {
            index++;
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    arr[left] = arr[index];
    arr[index] = pivot;
    return index;
}