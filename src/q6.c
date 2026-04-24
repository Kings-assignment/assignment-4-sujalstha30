// Write a C program that defines a structure called Student with members: name, roll number, 
// and marks. Prompt the user to enter data for one student and display the information.
#include<stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct Student std;

    printf("Enter the student's name:");
    scanf("%s", std.name);

    printf("Enter the student's roll no:");
    scanf("%d", &std.roll_no);

    printf("Enter the students's marks:");
    scanf("%f", &std.marks);

    printf("Student Informatiom:\n");
    printf("Name: %s\n",std.name);
    printf("Roll no: %d\n",std.roll_no);
    printf("Marks: %.2f\n",std.marks);

    return 0;
}
