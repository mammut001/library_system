//
// Created by doge-to-the-moon on 2024-06-18.
//

#include "Shelf.h"

#include <utility>
using std::string;
using std::vector;
using std::move;


void Shelf::setShelfId(const string &id) {
    shelfId = id;
}

string Shelf::getShelfId() const {
    return shelfId;
}

int Shelf::getShelfSize() const{
    return books.size();
}
void Shelf::addBorrowedBook(const string& isbn) {
    (*borrowedBooks)[isbn] = 100;
    printBorrowedBooks();
    cout<< "SUCCESs" << endl;
}

bool Shelf::updateNumberOfCopies(bool action,const Book &book) {
    const string isbn = book.isbn;
    bool flag = false;


    if(shelf.find(isbn) != shelf.end()) {
        //if we have this book
        if (action) {
            shelf[isbn] += 1;
            flag = true;
        }

        else {
            shelf[isbn] -= 1;
            flag = false;
        }

    }
    else {
        //if we did not find the book.
        if(action) {
            shelf[isbn] = 1;
        }
        else {
            cout << "No such books" << endl;
            return false;
        }

    }
    return flag;
}


void Shelf::addBook(const Book &book) {
    Book newBook = book;
    const string isbn = newBook.isbn;
    newBook.index = getShelfSize();

    cout << "add book -  index " <<newBook.index << " Name is " << book.name << endl;

    books.push_back(newBook);

    //update copies
    updateNumberOfCopies(true, newBook);


}

void Shelf::removeBook(const Book &book) {
    //retrieve index first
    const int index = book.index;
    const string isbn = book.isbn;
    cout << "Remove book index is " <<index << " Book Name is " << book.name <<" "<< endl;

    if (index >= 0) {
        cout << "Book index "<< index << endl;
        books.erase(books.begin()+index);
        //updating the index after the removed items.
        for (int i = index; i < books.size(); ++i) {
            books[i].index = i;
        }
        //subtract
        updateNumberOfCopies(false,book);

    }
    else {
        cout << "Invalid index: " << index << endl;
    }

}






