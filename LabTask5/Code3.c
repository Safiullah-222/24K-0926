#include<stdio.h>
int main(){
	int value;
	printf("enter value : ");
	scanf("%d",&value);
	
	if (value % 3 ==0 && value % 5 ==0)
	{
		printf("\nNumber is divisible by both 3 and 5");
	}
	else
	{
		printf("\nNumber is not divisible by both 3 and 5");
	}
	return 0;
	
}