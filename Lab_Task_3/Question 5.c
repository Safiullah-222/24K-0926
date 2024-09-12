#include <stdio.h>
main(){
	int principle =0;
	int rate,tp =0;
	float simpleinterest = 0.0;
	printf("input principle between 100-1000000  ");
	scanf("%d",&principle);
	printf("\ninput rate between 5-10  ");
	scanf("%d",&rate);
	printf("\nEnter time period between 1-10 years  ");
	scanf("%d",&tp);
	
	simpleinterest= (principle*rate*tp)/100;
	printf("\nSimple interest : %.2f ",simpleinterest);
	
	
}

