#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number ");
	scanf("%d",&a);
	printf("Enter 2nd number ");
	scanf("%d",&b);
	
	printf("value of a and b before swap: %d %d",a,b);
	
	a = a^b; // 01=1a
	b = a^b; // 11=0b
	a = a^b; // 10=1a
	
	printf("\nvalue of a and b after swap: %d %d", a,b);

return 0;
	
}