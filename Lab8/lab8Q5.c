#include <stdio.h>

int main() {
    int n, x, y, sp;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (x = 0; x < n; x++) {
        for (sp = 0; sp < n - x - 1; sp++) {
            printf(" ");
        }
        for (y = 0; y < (2 * x + 1); y++) {
            printf("*");
        }
        printf("\n");
    }

    for (x = n - 2; x >= 0; x--) {
        for (sp = 0; sp < n - x - 1; sp++) {
            printf(" ");
        }
        for (y = 0; y < (2 * x + 1); y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
