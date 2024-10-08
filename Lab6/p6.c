#include <stdio.h>

int main()

{
    int num1,num2,temp;
    num1=1;
    num2=2;
    printf("%d  ",num1);
    printf("%d  ",num2);
    for(int i=1;i<=7;i++){
        temp=num1*num2;
        num1=num2;
        num2=temp;
        printf("%d  ",num2);
    }

    return 0;
}