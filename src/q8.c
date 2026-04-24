// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include<stdio.h>

struct Book{
    char title[100];
    char author[100];
    float price;
};

int main(){
    int n,i;
    float limit;

    printf("Enter number of books:");
    scanf("%d", &n);

    struct Book books[n];

    for (i=0; i<n; i++){
        printf("\nEnter details for book:\n");

        printf("Title:");
        scanf("%s", books[i].title);

        printf("Author:");
        scanf("%s", books[i].author);

        printf("Price:");
        scanf("%d", &books[i].price);
    }

    printf("Enter price limit:");
    scanf("%f", &limit);

    printf("\nBooks with price above %.2f\n", limit);

    for(i=0; i<n; i++)
    {
        if(books[i].price>limit){
            printf("\nTitle:%s\n", books[i].title);
            printf("\nAuthor:%s\n", books[i].author);
            printf("\nPrice:%f\n", books[i].price);
        }
    }
    return 0;
}