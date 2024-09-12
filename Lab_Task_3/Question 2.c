#include <stdio.h>

int main() {

int a,b,temp;
temp= 0;

	printf("Enter value for a: ");
	scanf("%d", &a);
	
	printf("Enter value for b: ");
	scanf("%d", &b);
	
	temp =a;
	a=b;
	b= temp;

printf("\nValue of a and b: %d, %d ", a, b  );


return 0 ;
}

