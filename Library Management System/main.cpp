#include "LibraryManagementSystem.h"
#include "Book.h"

int main(){

    std::map<int, Book> books;

    books.insert({
        {1, Book(1, "001", "Pride and Prejudice", "Jane Austen")},
        {2, Book(2, "002", "To Kill a Mockingbird", "Harper Lee")},
        {3, Book(3, "003", "Moby-Dick", "Herman Melville")}
    });

    LibraryManagementSystem lms(books);

    return 0;
}