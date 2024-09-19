#include <stdio.h>

int main() {

    int cost = 0;
    float dis = 0.0, amountsaved = 0.0, finalprice = 0.0;

    printf("What is the total shopping cost ");
    scanf("%d", &cost);

    if (cost >= 500 && cost <= 2000) { 
        finalprice  = cost * (95.0 / 100.0);
        amountsaved = cost - finalprice;
        printf("Actual cost %d \nAmount saved %.2f \nFinal Price %.2f\n", cost, amountsaved, finalprice);
    }
    else if (cost >= 2000 && cost <= 4000) {
        finalprice  = cost * (90.0 / 100.0);
        amountsaved = cost - finalprice;
        printf("Actual cost %d \nAmount saved %.2f \nFinal Price %.2f\n", cost, amountsaved, finalprice);
    }
    else if (cost >= 4000 && cost <= 6000) {
        finalprice  = cost * (80.0 / 100.0);
        amountsaved = cost - finalprice;
        printf("Actual cost %d \nAmount saved %.2f \nFinal Price %.2f\n", cost, amountsaved, finalprice);
    }
    else if (cost > 6000) {
        finalprice  = cost * (65.0 / 100.0);
        amountsaved = cost - finalprice;
        printf("Actual cost %d \nAmount saved %.2f \nFinal Price %.2f\n", cost, amountsaved, finalprice);
    }
    else {
        printf("Not eligible for discount");
    }
    
    return 0;
}