#include <stdio.h>

int main() {
    int start_number;
    printf("Enter an odd number to start the pattern: ");
    scanf("%d", &start_number);

    int elements = (start_number + 1) / 2;

    for (int i = elements; i > 0; i--) {
        int current_number = start_number;
        
        for (int j = 0; j < i; j++) {
            printf("%d ", current_number);
            current_number -= 2;
        }
        
        printf("\n");
        start_number -= 2;
    }

    return 0;
}