// Write a C program that reverses an array of characters using pointers.
#include<stdio.h>
#include<ctype.h>
void reverse (char *str, int length){
    char *start=str;
    char *end=str+length-1;
    char temp;

    while(start< end){
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main(){
    char str[100];
    int length=0;


    printf("Enter a string:");
    scanf(" %s", str);

    for(int i=0; str[i]; i++){
        str[i]=tolower(str[i]);
    }

    while(str[length]!='\0')
    {
        length++;
    }

    reverse(str,length);

    printf("Reversed string: %s\n", str);

    return 0;
}