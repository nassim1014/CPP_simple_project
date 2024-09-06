#include "Library.h"
#include <algorithm>
#include <iostream>

void Library::addBook(const Book &book) {
    books.push_back(book);
    std::cout << "added book " << book.getTitle() << "\n";
}

void Library::displayBooks() const{

    for (const Book &book : books) {
        std::cout << "-------------\n";
        book.displayinfo();
    }
}

void Library::searchBook(const std::string& title) const{
    
    bool found = false;
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            found == true;
            book.displayinfo();
            break;
        }
    }
    if (!found) {
        std::cout << "book not found\n";
    }
}

void Library::removeBook(const std::string& title) {
    auto it = std::remove_if(books.begin(), books.end(), 
        [&title](const Book& book) { return book.getTitle() == title; });
    
    if (it != books.end()) {
        books.erase(it, books.end());
        std::cout << "Book removed: " << title << "\n";
    } else {
        std::cout << "Book not found: " << title << "\n";
    }
}