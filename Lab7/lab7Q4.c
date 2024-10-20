#include <stdio.h>

int main() {
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    int occurrence[size];
    
    for (int i = 0; i < size; i++) {
        occurrence[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        occurrence[arr[i]]++;
    }

    printf("Elements occurring more than once: ");
    for (int i = 0; i < size; i++) {
        if (occurrence[arr[i]] > 1) {
            printf("%d ", arr[i]);
            occurrence[arr[i]] = 0;
        }
    }

    return 0;
}

