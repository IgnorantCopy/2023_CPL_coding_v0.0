//
// Created by Ignorant on 2023/10/17.
//

#include <stdio.h>

void merge(int arr[], int left1, int right1, int right2, int len);

void mergeSort(int arr[], int low, int high);

int main() {
    int nums[11] = {8, 5, 3, 9, 11, 6, 4, 1, 10, 7, 2};
    mergeSort(nums, 0, 10);
    for (int i = 0; i < 11; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

void mergeSort(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high, high - low + 1);
    }
}

void merge(int *arr, int left1, int right1, int right2, int len) {
    int newArr[len];
    int i = left1;
    int j = right1 + 1;
    int k = 0;
    while (i <= right1 && j <= right2) {
        if (arr[i] < arr[j]) {
            newArr[k++] = arr[i++];
        } else {
            newArr[k++] = arr[j++];
        }
    }
    if (i == right1 + 1) {
        while (j <= right2) {
            newArr[k++] = arr[j++];
        }
    } else {
        while (i <= right1) {
            newArr[k++] = arr[i++];
        }
    }
    k = 0;
    for (i = left1; i <= right2; i++) {
        arr[i] = newArr[k++];
    }
}

