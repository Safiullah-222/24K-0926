#include <stdio.h>

int main() {
    int min, max;

    printf("Enter min value: ");
    scanf("%d", &min);
    printf("Enter max value: ");
    scanf("%d", &max);

    for (int value = min; value <= max; value++) {
        if (value < 2) {
            continue;
        }

        int isPrime = 1;

        for (int i = 2; i * i <= value; i++) {
            if (value % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("Prime number is %d\n", value);
        }
    }

    return 0;
}