#include "Book.h"
#include <iostream>

Book::Book(const std::string t, const std::string a, const std::string i)
    : title(t), author(a), isbn(i), available(true){}

std::string Book::getTitle() const {return title;}
std::string Book::getAuthor() const {return author;}
std::string Book::getIsbn() const {return isbn;}

bool Book::isavailable() const {return available;}

void Book::setAvailable(bool value) {available = value;}

void Book::displayinfo() const {
    std::cout   << "Title :" << title << "\n"
                << "Author :" << author << "\n"
                << "ISBN :" << isbn << "\n"
                << "Availability :" << (available ? "Yes":"No") << "\n";

};