#include <stdio.h>

#define KM_CONVERSION 0.001

double metersToKilometers(double meters) {
    static int callCounter = 0;
    callCounter++;
    printf("Function used %d times\n", callCounter);
    return meters * KM_CONVERSION;
}

int main() {
    double distance;
    printf("Enter the distance in meters: ");
    scanf("%lf", &distance);

    printf("Converted: %.2f meters = %.2f kilometers\n", distance, metersToKilometers(distance));
    return 0;
}
