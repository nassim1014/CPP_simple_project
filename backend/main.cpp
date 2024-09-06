#include <iostream>
#include "Library.h"

int main() {
    std::cout << "Welcome to the Library Management System!\n";

    Library myLibrary;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    Book book2("1984", "George Orwell", "9780451524935");
    Book book3("To Kill a Mockingbird", "Harper Lee", "9780061120084");

    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3);

    myLibrary.displayBooks();
    myLibrary.searchBook("1984");
    myLibrary.removeBook("The Great Gatsby");
    myLibrary.displayBooks();

    return 0;
}
