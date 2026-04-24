// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.
#include<stdio.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i, max=0;

    for (i=0; i<5; i++){
        printf("\nEnter the details for Employee %d\n",i+1);

        printf("Name:");
        scanf("%s", emp[i].name);

        printf("Id:");
        scanf("%d", &emp[i].id);

        printf("Salary:");
        scanf("%f", &emp[i].salary);
    }

    for(i=0; i<5; i++){
        if(emp[i].salary>emp[max].salary){
            max=i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("Name:%s\n", emp[max].name);
    printf("Id:%d\n", emp[max].id);
    printf("Salary:%.2f\n", emp[max].salary);

    return 0;
}