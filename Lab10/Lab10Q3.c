#include <stdio.h>

#define MAX_TEMP 35

void checkTemperature(float temp) {
    static int count = 0;

    if (temp > MAX_TEMP) {
        count++;
        printf("Temperature %.2f exceeds the limit!\n", temp);
    } else {
        printf("Temperature %.2f is within the limit.\n", temp);
    }
    printf("Exceed count: %d\n", count);
}

int main() {
    float temps[] = {36.5, 33.2, 37.8, 34.1};
    for (int i = 0; i < 4; i++) {
        checkTemperature(temps[i]);
    }
    return 0;
}