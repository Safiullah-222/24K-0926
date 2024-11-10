#include <stdio.h>

float calculate(char operato, int value1, int value2) {
    int temp;
    float result = 0.0;

    if (value1 < value2) {
        temp = value1;
        value1 = value2;
        value2 = temp;
    }

    switch (operato) {
        case '*':
            result = value1 * value2;
            break;
        case '/':
            result = (float)value1 / value2; 
            break;
        case '+':
            result = value1 + value2;
            break;
        case '-':
            result = value1 - value2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }
    return result;
}

int main() {
    char operato;
    int value1, value2;
    float result;

    printf("Enter operator for operation you want to perform (*, /, +, -): ");
    scanf(" %c", &operato);

    printf("Enter 2 numbers: ");
    scanf("%d %d", &value1, &value2);

    result = calculate(operato, value1, value2);


        printf("Result of %c operation is: %.2f\n", operato, result);

    return 0;
}
