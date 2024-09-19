#include <stdio.h>
  
 int main()
 {
    char operato;
    int value1,value2 = 0;
    int temp = 0;
    float result = 0.0;

    printf("Enter operator for operation you want to perform ; * or / or + or - ");
    scanf(" %c",&operato);

    printf("Enter 2 numbers " );
    scanf(" %d %d", &value1, &value2 );

    if (value1 < value2) 
 {
    temp=value1;
    value1 = value2;
    value2= temp;
 }

switch (operato)
{
case '*':
    result = value1 * value2;
    printf ("result of * is :%.2f" ,result);
    break;
case '/':
    result = value1 / value2;
    printf ("result of / is :%.2f" ,result);
    break;
case '+':
    result = value1 + value2;
    printf ("result of + is :%.2f" ,result);
    break;
case '-':
    result = value1 - value2;
    printf ("result of - is :%.2f" ,result);
    break;

default: 
printf("iNVALID");
    break;
}
    return 0;
}