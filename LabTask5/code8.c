#include<stdio.h>
int main(){
	int year;
	printf("Enter year ");
	scanf("%d",&year);
	
	if (year % 4 == 0){
		printf("It is leap year");
		
	}
	else {
		printf("Not a leap year");
	}
return 0;
}