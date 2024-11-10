#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    int prime = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}

int main() {
    int num;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
