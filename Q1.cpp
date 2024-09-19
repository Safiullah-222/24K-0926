#include <stdio.h>
  
 int main(){

  int number= 0;
  int result = 0;
 
  printf("Enter number to check whether it is multiple of 3 ");
  scanf("%d", &number);

  result = number%3;

  if (result == 0) 

  {
    printf("Number is multiple of 3");

  }

  else
  {
    printf("Number is not multiple of 3");
  }
  
return 0;
}