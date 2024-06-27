//
// Created by doge-to-the-moon on 2024-06-23.
//

#include "Library.h"
// key is student id (string) val: table (k is isbn(string) v is timestamp)
//std::shared_ptr<map<string,map<string,system_clock::time_point>>> borrowedBooks;
// TODO should fine the student does not return book ontime
void Library::returnBook(const std::string &isbn, const std::string &studentId) {

    auto student_pair = borrowedBooks->find(studentId);
    if(student_pair != borrowedBooks->end()){
        // if we find the key;
        cout<< "Student ID: "+student_pair->first <<" "<< endl;

        auto &borrowedBooksVector = student_pair->second;
        auto findBook = borrowedBooksVector.find(isbn);
        auto book_it = borrowedBooksVector.find(isbn);
        if(book_it != borrowedBooksVector.end()){
            // if we find it;
            borrowedBooksVector.erase(book_it);
            cout << "Returned Successfully" <<endl;
        }
        else{
            cout << "ISBN "<< isbn <<" is not associated with student"<<studentId <<endl;
        }
    }
    else{
        printf("Students did not borrow any books.");
    }
}
//std::shared_ptr<map<string,map<string,system_clock::time_point>>> borrowedBooks;
void Library::addBorrowedBook(const string& isbn, const string& studentId) {
    auto currTimeStamp = system_clock::now();
    auto containsStudent = borrowedBooks->find(studentId);
    if(containsStudent != borrowedBooks->end()){
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