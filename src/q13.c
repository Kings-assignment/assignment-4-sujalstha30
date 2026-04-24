// Write a C program that copies the contents of one file to another file.
#include <stdio.h>

int main() {
    FILE *fptr, *fp;
    char ch;


    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }


    fp = fopen("target.txt", "w");
    if (fp == NULL) {
        printf("Error creating target file.\n");
        fclose(fptr);
        return 1;
    }


    while ((ch = fgetc(fptr)) != EOF) {
        fputc(ch, fp);
    }

    printf("File copied successfully.\n");

    fclose(fptr);
    fclose(fp);

    return 0;
}