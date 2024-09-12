#include <stdio.h>
  main(){
  

  float taxrate, tax = 0.00;
  int salary = 0;

  printf ("\nEnter Tax rate and Salary ");
  scanf("%f %d", &taxrate,&salary);
  tax = salary *(taxrate/100);
  salary= salary - tax;
  
  printf("\nYour Total Tax is : %.2f \nYour Final Salary is: %d",tax ,salary);
  
  return 0;


}
