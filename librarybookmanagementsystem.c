#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Book structure
struct Book {
    char title[100];
    char author[100];
    int year;
};

// Array to store books and a counter
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function to add a new book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    scanf(" %[^\n]%*c", library[bookCount].title);
    printf("Enter author name: ");
    scanf(" %[^\n]%*c", library[bookCount].author);
    printf("Enter publication year: ");
    scanf("%d", &library[bookCount].year);

    bookCount++;
    printf("Book added successfully!\n");
}

// Function to search for a book by title
void searchBook() {
    char searchTitle[100];
    printf("Enter the title of the book to search: ");
    scanf(" %[^\n]%*c", searchTitle);

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Year: %d\n", library[i].year);
            return;
        }
    }

    printf("Book not found.\n");
}

// Function to delete a book by title
void deleteBook() {
    char deleteTitle[100];
    printf("Enter the title of the book to delete: ");
    scanf(" %[^\n]%*c", deleteTitle);

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, deleteTitle) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully!\n");
            return;
        }
    }

    printf("Book not found.\n");
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("Library Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d. Title: %s, Author: %s, Year: %d\n", i + 1, library[i].title, library[i].author, library[i].year);
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nLibrary Book Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Delete Book\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
