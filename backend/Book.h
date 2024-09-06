#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;
public:
    Book(std::string title, std::string author, std::string isbn);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const ;
    bool isavailable() const;
    void setAvailable(bool status);
    void displayinfo() const;
};
#endif // BOOK_H
