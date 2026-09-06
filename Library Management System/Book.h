#pragma once
#include <string>

class Book{
    private:
        int bookID;
        std::string shelfNo;
        std::string bookName;
        std::string author;

    public:
        Book();
        Book(int bookID, std::string shelfNo, const std::string& bookName, const std::string& author);

        int getBookID();
        std::string getShelfNo();
        std::string getBookName();
        std::string getAuthor();
};