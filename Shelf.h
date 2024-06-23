//
// Created by doge-to-the-moon on 2024-06-18.
//

#ifndef SHELF_H
#define SHELF_H
#include "Book.h"
#include <string>
#include <utility>
#include <vector>

using std::string;
using std::vector;
using std::move;
using std::map;

class Shelf {
private:
    string shelfId;
    vector<Book> books;

    map<string,int> shelf;

public:
    Shelf(string id);
    string getShelfId() const;

    void setShelfId(const string& id);

    vector<Book> getBooks() const {
        return books;
    }
    bool updateNumberOfCopies(bool action,const Book &book);
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
