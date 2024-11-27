#include <stdio.h>

int searchLinear(int arr[], int size, int key, int idx) {
    if (idx == size) return -1;
    if (arr[idx] == key) return idx;
    return searchLinear(arr, size, key, idx + 1);
}

int main() {
    int nums[] = {15, 24, 37, 42, 50};
    int n = sizeof(nums) / sizeof(nums[0]);
    int value = 37;

    int position = searchLinear(nums, n, value, 0);
    if (position != -1) {
        printf("Found at index: %d\n", position);
    } else {
        printf("Not found\n");
    }
    return 0;
}
