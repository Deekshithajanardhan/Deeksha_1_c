#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char isbn[20];
} Book;
void addBook(Book *library, int *bookCount);
void searchBook(Book *library, int bookCount);
void deleteBook(Book *library, int *bookCount);
void displayBooks(Book *library, int bookCount);

int main() {
    Book library[MAX_BOOKS]; 
    int bookCount = 0;      
    int choice;

    while (1) {
        printf("\nBook Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Delete Book\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character

        switch (choice)
