#include <stdio.h>

void recursiveBubbleSort(int arr[], int n) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursiveBubbleSort(arr, n - 1);
}

int main() {
    int array[] = {7, 2, 4, 9, 1};
    int length = sizeof(array) / sizeof(array[0]);

    recursiveBubbleSort(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
