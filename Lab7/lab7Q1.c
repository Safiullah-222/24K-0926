#include<stdio.h>
int main() {
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += num[i];
    }
    printf("Sum is equal to: %d", sum);
    return 0;
}
