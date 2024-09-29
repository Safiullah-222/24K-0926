#include<stdio.h>
int main(){
	int attend, assignment, examresult;
	int point = 2;
	
	printf("Enter attendance in percentage ");
	scanf("%d", &attend);
	printf("Enter assignment scores (0-30) ");
	scanf("%d", &assignment);
	printf("Enter exam result ");
	scanf("%d", &examresult);
	
	// total assignment scores = 30
	
	if (attend >= 50){
		
		if (assignment < 15){
			point--;	
		}
		if (examresult < 50){
			point--;
		}
		
	}
	
	else {
		printf("Ungraded attendance not sufficient\n");
		point = 0;
	}
	
	(point == 2) ? printf("A grade\n") :
	(point == 1) ? printf("B grade\n") : printf("F grade\n");
	
	return 0;
}


