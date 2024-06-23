//
// Created by doge-to-the-moon on 2024-06-23.
//

#ifndef LIBRARY_SYSTEM_STUDENT_H
#define LIBRARY_SYSTEM_STUDENT_H

#include "../Book.h"
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <iostream>


using std::string;
using std::vector;
using std::move;
using std::map;
using std::make_shared;
using std::shared_ptr;

class Library;
class Student {
private:
    string id; // only key
    string name;
    std::shared_ptr<map<string,int>> borrowedBooks;
public:
    Student(string id, string name):id(std::move(id)), name(std::move(name)), borrowedBooks(make_shared<map<string,int>>()){}
    string getId (){
        return id;
    }
    string getName(){
        return name;
    }
    shared_ptr<map<string,int>> getBorrowedBooks(){
        return borrowedBooks;
    };
    void addBorrowedBook(const string& isbn);
    void printBorrowedBooks(){
        for (auto const & pair: *borrowedBooks){
            cout<< "ISBN:" << pair.first << "TTL: "<< pair.second <<endl;
        }
    }

};


#endif //LIBRARY_SYSTEM_STUDENT_H
