#include <stdio.h>

int main() {
    int matrix[3][3];
    int saddleFound = 0;

    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int rowMinValue = matrix[i][0];
        int rowMinCol = 0;

        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMinValue) {
                rowMinValue = matrix[i][j];
                rowMinCol = j;
            }
        }

        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][rowMinCol] > rowMinValue) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle point at [%d][%d]: %d\n", i + 1, rowMinCol + 1, rowMinValue);
            saddleFound = 1;
        }
    }

    if (!saddleFound) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}
