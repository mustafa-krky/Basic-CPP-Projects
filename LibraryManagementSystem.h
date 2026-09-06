#pragma once
#include "Book.h"
#include <map>

class LibraryManagementSystem{
    private:
        std::map<int, Book> books;

    public:
        LibraryManagementSystem(const std::map<int, Book>& books);
        void addBook();
        void showBookInfo();
        void deleteBook();
        void showAllBooks();
        void printInfo(int bookID, const std::string& bookName, const std::string& author, const std::string& shelfNumber);
        void startProgram();

};