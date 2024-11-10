#include <stdio.h>
#include <string.h>

void reverseString(char str[], char reversed[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
}

int main() {
    char str[100];
    char reversed[100];
    
    printf("Enter a string to reverse: ");
    scanf("%s", str);
    
    reverseString(str, reversed);
    printf("Reversed string: %s\n", reversed);
    
    return 0;
}
