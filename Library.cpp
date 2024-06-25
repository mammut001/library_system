//
// Created by doge-to-the-moon on 2024-06-23.
//

#include "Library.h"
// key is student id (string) val: table (k is isbn(string) v is timestamp)
//<map<string,vector<map<string,system_clock::time_point>>>>
//void Library::returnBook(const std::string &isbn, const std::string &studentId) {
//    auto student_pair = borrowedBooks->find(studentId);
//    if(student_pair != borrowedBooks->end()){
//        // if we find the key;
//        cout<< "Student ID: "+student_pair->first <<" "<< endl;
//
//        auto &borrowedBooksVector = student_pair->second;
//        for(auto book:borrowedBooksVector){
//            auto book
//
//        }
//    }
//    else{
//        printf("Students did not borrow any books.");
//    }
//}
//std::shared_ptr<map<string,map<string,system_clock::time_point>>> borrowedBooks;
void Library::addBorrowedBook(const string& isbn, const string& studentId) {
    auto currTimeStamp = system_clock::now();
    auto containsStudent = borrowedBooks->find(studentId);
    if(containsStudent != borrowedBooks->end()){
//        printf("student found \n");
        if (containsStudent->second.find(isbn) != containsStudent->second.end()){
            //find the book. so cannot perform action
            cout<< "book exists, cannot perform action.  " << endl;

        }
        else{
            containsStudent->second[isbn] = currTimeStamp;
            cout<< "success" << endl;
        }

    }
    else{
        (*borrowedBooks)[studentId][isbn] = currTimeStamp;
        cout<< "success" << endl;
    }
}