#include "LibraryManagementSystem.h"
#include <iostream>

LibraryManagementSystem::LibraryManagementSystem(const std::map<int, Book>& books) : books(books){
    startProgram();
}

void LibraryManagementSystem::addBook(){
    int bookID;
    std::string shelfNo;
    std::string bookName;
    std::string author;

    std::cout << "- - - - - ADD BOOK - - - - -";

    std::cout << "\nEnter the book ID: ";
    std::cin >> bookID;

    std::cout << "Enter the shelf number: ";
    std::cin >> shelfNo;

    std::cin.ignore();

    std::cout << "Enter the book name: ";
    std::getline(std::cin, bookName);

    std::cout << "Enter the author: ";
    std::getline(std::cin, author);

    this->books.insert({bookID, Book(bookID, shelfNo, bookName, author)});
}

void LibraryManagementSystem::showBookInfo(){
    int ID;

    std::cout << "Enter the ID: ";
    std::cin >> ID;

    auto iterator = this->books.find(ID);
    if(iterator != this->books.end()){
        this->printInfo(iterator->second.getBookID(), iterator->second.getBookName(), iterator->second.getAuthor(), iterator->second.getShelfNo());
    }else{
        std::cout << "No results found...\n";
    }
}

void LibraryManagementSystem::deleteBook(){
    int ID;

    std::cout << "Enter the ID: ";
    std::cin >> ID;

    if(this->books.erase(ID)){
        std::cout << "!!! Deletion successful...\n";
        showAllBooks();
    }else{
        std::cout << "!!! The deletion process failed. Please try again.\n";
    }
}

void LibraryManagementSystem::showAllBooks(){

    if(!this->books.empty()){
        std::cout << "\n====== BOOKS ======";

        for(auto& book: this->books){
        this->printInfo(book.second.getBookID(), book.second.getBookName(), book.second.getAuthor(), book.second.getShelfNo());
    }
    }else{
        std::cout << "\n-> ! There are no books in the library...\n";
    }
}

void LibraryManagementSystem::startProgram(){
    int choice;
    
    std::cout << "====== Welcome to the Library Management System ======\n";

    do{
        std::cout << "- - - - - MENU - - - - -\n";
        std::cout << "1-) Show all books\n2-) Add book\n3-) Show book info\n4-) Delete a book\n5-) Exit\n";

        std::cout << "-> Choose a number to perform an operation on: ";
        std::cin >> choice;

        switch(choice){
            case 1:
                showAllBooks();
                break;
            case 2:
                addBook();
                break;
            case 3:
                showBookInfo();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                std::cout << "* * * The program finished * * *\n";
                break;
            default:
                std::cout << "!!! Please choose a correct number !!!\n";

        }

    }while(choice != 5);
}

void LibraryManagementSystem::printInfo(int bookID, const std::string& bookName, const std::string& author, const std::string& shelfNumber){
    
    std::cout << "\nBook ID: " << bookID << std::endl;
    std::cout << "Book name: " << bookName << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Shelf number: " << shelfNumber << std::endl;
}