// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.
#include <stdio.h>

int main() {
    FILE *fptr;
    char str[200];

    fptr = fopen("output.txt", "w");

    if (fptr == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter a string to write into the file:\n");
    fgets(str, sizeof(str), stdin);

    fputs(str, fptr);


    fclose(fptr);

    printf("File has been written successfully.\n");

    return 0;
}