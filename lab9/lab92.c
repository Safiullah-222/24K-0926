#include<stdio.h>

int programswap(int num, int num2){
	printf("number before swap %d %d\n", num , num2);
	int temp =0;
	temp = num;
	num = num2;
	num2 = temp;
	printf("number before swap %d %d\n", num , num2);
}









int main(){
	int a=0, b=0;
	printf("Enter two numbers to be swapped\n ");
	scanf("%d %d", &a, &b);
	programswap(a , b);
}


	
	