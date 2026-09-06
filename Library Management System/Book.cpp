#include "Book.h"

Book::Book(){}

Book::Book(int bookID, std::string shelfNo, const std::string& bookName, const std::string& author) : bookID(bookID), shelfNo(shelfNo), bookName(bookName), author(author){}

int Book::getBookID(){
    return this->bookID;
}

std::string Book::getShelfNo(){
    return this->shelfNo;
}

std::string Book::getBookName(){
    return this->bookName;
}

std::string Book::getAuthor(){
    return this->author;
}