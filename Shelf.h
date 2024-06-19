//
// Created by doge-to-the-moon on 2024-06-18.
//

#ifndef SHELF_H
#define SHELF_H
#include <string>
#include <utility>
#include <vector>
#include "Book.h"

using std::string;
using std::vector;
using std::move;

class Shelf {
private:
    string shelfId;
    vector<Book> books;

public:
    Shelf(string id);
    string getShelfId() const;

    void setShelfId(const string& id);

    vector<Book> getBooks() const {
        return books;
    }
    void addBook(const Book& book);
    void removeBook(const Book& book);

    void printAllBooks() const {
        std::cout << "Total number of books on the shelf: " << getShelfSize() << std::endl;
        for (const auto& book: books) {
            Book::print(book);
            cout << "---------------------" << endl;

        }
    }
    int getShelfSize() const;


};



#endif //SHELF_H
