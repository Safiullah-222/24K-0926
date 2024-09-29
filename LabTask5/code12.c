#include <stdio.h>

int main() {
    int age, creditScore;
    float income;



	printf("_________________________________________________________\n");
	printf("WelcomeBank system.\n");
	sleep(1);
	printf("Provide the following details to get LOAN \n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Annual income: ");
    scanf("%f", &income);

    printf("Credit score: ");
    scanf("%d", &creditScore);

   
    if (age >= 18 && age <= 70 && income >= 45000 && creditScore >= 500) {
        printf("You are eligible for a loan.\n");
    } else {
        printf("You are not eligible for a loan.\n");
    }

	printf("_________________________________________________________\n");
    return 0;
}
