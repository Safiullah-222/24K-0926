#include <stdio.h>
int main(){
	int x1,y1,x2,y2 = 0;
	float slope = 0.0;
	x1 = 3;
	x2 = 5;
	y1 = 2;
	y2 = 4;
	
	slope =  (y2-y1/x2-x1);
	
	printf("Slope of the points is : %.3f", slope);
	
return 0;
	
}