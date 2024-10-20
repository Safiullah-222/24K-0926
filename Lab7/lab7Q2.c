#include<stdio.h>
int main() {
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array[9];
    int j = 8;

    for (int i = 0; i < 9; i++) {
        array[i] = num[j];
        j--;
    }

    for (int i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
