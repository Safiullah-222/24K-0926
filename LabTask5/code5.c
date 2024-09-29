#include <stdio.h>
int main() {
	int num1, num2;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("\nEnter num2: ");
    
    scanf("%d", &num2);
    num1 >num2 ? printf("Number1 is greater\n") : printf("Number2 is greater");

return 0;
}