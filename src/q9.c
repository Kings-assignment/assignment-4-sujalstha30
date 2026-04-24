// Write a C program that uses a structure Point with members x and y, representing coordinates. 
// Write a function that takes two Point structures and returns the distance between them.
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float findDistance(struct Point p1, struct Point p2) {
    
    float distance;
    distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));

    return distance;
}

int main() {
    struct Point p1, p2;
    float result;

    printf("Enter x and y for first point: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter x and y for second point: ");
    scanf("%f %f", &p2.x, &p2.y);

    result = findDistance(p1, p2);

    printf("Distance between the two points: %.2f\n", result);

    return 0;
}