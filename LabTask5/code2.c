#include<stdio.h>
int main()
{
	int value;
	
	printf("enter value to be identified: ");
	scanf("%d", &value);
	
	if (value >= 0){
		printf("\nNumber is Positive");
		if (value%2 == 0){
			printf("\nNumber is even %d ",value );
		}
		else{
			printf("\nNumber is odd %d ", value);
		}
		
	}
	else {
		printf("Number is negative");
	}
	
	return 0;
}