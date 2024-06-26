//
// Created by doge-to-the-moon on 2024-06-23.
//

#ifndef LIBRARY_SYSTEM_LIBRARY_H
#define LIBRARY_SYSTEM_LIBRARY_H

#include "Shelf.h"
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <iostream>
#include <memory>
#include <iostream>
#include <chrono>
#include <ctime>

using std::string;
using std::vector;
using std::move;
using std::map;
using std::cout;
using std::endl;


using std::make_shared;
using std::shared_ptr;
using namespace std::chrono;

class Library {
private:
vector<Shelf> collections;
std::shared_ptr<map<string,map<string,system_clock::time_point>>> borrowedBooks;

public:
    // key is student id (string) val: table (k is isbn(string) v is timestamp)
    Library(): borrowedBooks(move(make_shared<map<string,map<string,system_clock::time_point>>>())){}

    void addBorrowedBook(const string& isbn, const string& studentId);
    void returnBook(const string& isbn, const string& studentId);
    shared_ptr<map<string,map<string,system_clock::time_point>>> getBorrowedBooks(){
        return borrowedBooks;
    };


    static void printBorrowedVector(const map<string,system_clock::time_point > & dic){
        printf("Library Output: \n");
        for (auto eachBorrowedBook: dic){
                std::time_t borrow_time = std::chrono::system_clock::to_time_t(eachBorrowedBook.second);
                char buffer[26];
                ctime_r(&borrow_time, buffer);
                buffer[24] = '\0';

                cout << "ISBN is: " <<eachBorrowedBook.first<< " and borrowed time at " <<buffer<<"  "<<endl;
        }

    }
    void printBorrowedBooks(){
        cout << "Borrowed Books" << endl;
        for (auto const & student: *borrowedBooks){
            std::cout << "Student ID: " << student.first << std::endl;
            printBorrowedVector(student.second);
        }

    }



};


#endif //LIBRARY_SYSTEM_LIBRARY_H
