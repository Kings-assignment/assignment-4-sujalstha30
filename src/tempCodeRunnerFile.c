// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int n, i;


    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

    
        fprintf(fptr, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);

    printf("\nRecords saved successfully!\n");


    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");


    while (fscanf(fptr, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s\n", s.name);
        printf("Roll Number: %d\n", s.roll);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(fptr);

    return 0;
}