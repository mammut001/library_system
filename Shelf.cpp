//
// Created by doge-to-the-moon on 2024-06-18.
//

#include "Shelf.h"

#include <utility>
using std::string;
using std::vector;
using std::move;

Shelf::Shelf(string id) : shelfId(std::move(id)) {}

void Shelf::setShelfId(const string &id) {
    shelfId = id;
}

string Shelf::getShelfId() const {
    return shelfId;
}

int Shelf::getShelfSize() const{
    return books.size();
}

void Shelf::addBook(const Book &book) {
    Book newBook = book;
    newBook.index = getShelfSize();
    books.push_back(newBook);
}

void Shelf::removeBook(const Book &book) {
    //retrieve index first
    const int index = book.index;
    cout << "Book index "<< index << endl;
    books.erase(books.begin()+index);
    for (int i = index; i < books.size(); ++i) {
        books[i].index = i;
    }

}






