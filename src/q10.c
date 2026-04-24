// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float mileage;
};

int main() {
    struct Car cars[3];
    int i, min = 0;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Car %d\n", i + 1);

        printf("Model: ");
        scanf("%s", cars[i].model);

        printf("Year: ");
        scanf("%d", &cars[i].year);

        printf("Mileage: ");
        scanf("%f", &cars[i].mileage);
    }

    for (i = 1; i < 3; i++) {
        if (cars[i].mileage < cars[min].mileage) {
            min = i;
        }
    }

    printf("\nCar with Lowest Mileage:\n");
    printf("Model: %s\n", cars[min].model);
    printf("Year: %d\n", cars[min].year);
    printf("Mileage: %.2f\n", cars[min].mileage);

    return 0;
}