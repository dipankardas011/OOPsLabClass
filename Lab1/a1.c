/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C to store the author, title, and price of 10 books using structure and display the book details.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 50
#define NUMBER 3

typedef struct books
{
    char author[MAX_CHAR];
    char title[MAX_CHAR];
    u_int32_t price;
} books;

int main(int argc, char const *argv[])
{
    books *Book;
    Book = (books *)malloc(NUMBER * sizeof(books));
    for (int i = 0; i < NUMBER; i++)
    {
        printf("enter the author..\n");
        scanf(" %[^\n]s", Book[i].author);
        printf("enter the title..\n");
        scanf(" %[^\n]s", Book[i].title);
        printf("enter the price..\n");
        scanf("%d", &Book[i].price);
    }

    // print
    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d\n", (i + 1));
        printf("\t%s\n", Book[i].author);
        printf("\t%s\n", Book[i].title);
        printf("\t%d\n", Book[i].price);
    }
    free(Book);
    remove(argv[0]);
    return 0;
}
