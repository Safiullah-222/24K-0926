#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

float calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int isPointInside(Point p, float x_min, float x_max, float y_min, float y_max) {
    return (p.x >= x_min && p.x <= x_max && p.y >= y_min && p.y <= y_max);
}

int main() {
    Point p1 = {2.0, 3.0};
    Point p2 = {5.0, 7.0};
    printf("Distance: %.2f\n", calculateDistance(p1, p2));

    if (isPointInside(p1, 1.0, 4.0, 2.0, 6.0)) {
        printf("Point is inside the rectangle.\n");
    } else {
        printf("Point is outside the rectangle.\n");
    }
    return 0;
}
