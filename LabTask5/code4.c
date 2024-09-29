#include<stdio.h>
int main(){
	int age;
	char citizen;
	printf("enter age : ");
	scanf("%d",&age);
	
	if (age >= 18 && age <= 24){
		printf("enter citizenship : ");
	    scanf(" %c",&citizen);
		if (citizen == 'p' && citizen == 'P'){
			printf("Eligible");		
		}
		else {
			printf("Not Eligible");
		}
	}
	else{
		printf("Not Eligible");
	}

	return 0;
}