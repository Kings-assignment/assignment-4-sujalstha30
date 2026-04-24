// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.
#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str;
    int size, length=0;
    char *ptr;

    printf("Enter maximum size of the string:");
    scanf("%d", &size);

    str=(char *)malloc(size * sizeof(char));

    if(str==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string:");
    scanf("%s", str);

    ptr=str;
    while(*ptr !='\0'){
        length++;
        ptr++;
    }
    printf("Length of string: %d\n", length);

    free(str);

    return 0;
}