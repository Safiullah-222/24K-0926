#include <stdio.h>

int main() {
    int array[10] = {4, 1, 6, 8, 10, 21, 8, 9, 2, 6};
    int smallest = array[0], largest = array[0];
    
    for (int i = 1; i < 10; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    
    printf("Maximum Number = %d\n", largest);
    printf("Minimum Number = %d\n", smallest);
    
    return 0;
}

