#include<stdio.h>
int main(){
	int age;
	
	printf("Enter age ");
	scanf("%d",&age);
	
	if (age>=1 && age <=80)
	{
		if (age >= 1 && age<= 12){
			printf("Child");
		}
		else if (age >= 13 && age<= 19){
			printf("teenager");
	    }
	    else if (age >= 20 && age<= 50){
			printf("Adult");
	    }
	    else
	    {
		
			printf("teenager");
	    }
	}
	 else
	 {
		age >= 0 ? printf("Good to be alive\n") : printf("Invalid Entry");
	}
	return 0;
}

