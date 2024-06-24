//
// Created by doge-to-the-moon on 2024-06-23.
//

#include "Library.h"
void Library::addBorrowedBook(const string& isbn) {
    (*borrowedBooks)[isbn] = 100;
    printBorrowedBooks();
    cout<< "SUCCESs" << endl;
}