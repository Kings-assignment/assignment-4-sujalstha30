// Write a C program that counts the number of characters, words, and lines in a text file.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fptr = fopen("output.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

    
        if (ch == '\n')
            lines++;

    
        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fptr);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}