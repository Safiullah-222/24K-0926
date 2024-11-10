#include <stdio.h>

int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main() {
    int arr[] = {3, 5, 1, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = find_max(arr, n);
    int min = find_min(arr, n);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}

