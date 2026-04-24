// Write a C program to read the contents of a text file and display them on the screen.
#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    fptr= fopen("output.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n\n");


    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}