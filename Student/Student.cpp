//
// Created by doge-to-the-moon on 2024-06-23.
//

#include "Student.h"
void Student::addBorrowedBook(const string& isbn) {
    (*borrowedBooks)[isbn] = 100;
    printBorrowedBooks();
}