//
// Created by doge-to-the-moon on 2024-06-23.
//

#include "Library.h"
// key is student id (string) val: table (k is isbn(string) v is timestamp)
//<map<string,vector<map<string,system_clock::time_point>>>>
void Library::addBorrowedBook(const string& isbn, const string& studentId) {
//    (*borrowedBooks)[isbn] = 100;
    auto currTimeStamp = system_clock::now();
    if (borrowedBooks->find(studentId) != borrowedBooks->end()){
        //key exists
        (*borrowedBooks)[studentId].push_back(map<string, system_clock::time_point>{{isbn,currTimeStamp}});

    }
    else{
        vector<map<string,system_clock::time_point>> borrowedBookTimeSlot;
        borrowedBookTimeSlot.push_back(map<string,system_clock::time_point >{{isbn, currTimeStamp}});
        //key does not exist
        (*borrowedBooks)[studentId] = borrowedBookTimeSlot;
    }

//    printBorrowedBooks();
    cout<< "success" << endl;
}