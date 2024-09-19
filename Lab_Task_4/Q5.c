#include <stdio.h>
#include <string.h> 

int main() {
    int entered;
    char res[10]; 
    printf("Enter any value between 1 to 9: ");
    scanf("%d", &entered);

    
    const char *numbers[] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

   
    if (entered < 1 || entered > 9) {
        printf("Entered value is out of range.\n");
        return 1; }
  
    strcpy(res, numbers[entered - 1]);

   
    printf("%s\n", res);

    return 0;
}