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

using std::make_shared;
using std::shared_ptr;

using std::string;
using std::vector;
using std::move;
using std::map;

class Library;
class Student {
private:
    string id; // only key
    string name;
public:
//    Shelf(string id):shelfId(std::move(id)), borrowedBooks(std::move(make_shared<map<string,int>>())){};

    Student(string id, string name):id(std::move(id)), name(std::move(name)){};
    string getId (){
        return id;
    }
    string getName(){
        return name;
    }

    void printBorrowedBooks(const shared_ptr<map<string,int>> &borrowedBooks) const{

        for (auto const & pair: *borrowedBooks){
            cout<< "ISBN:" << pair.first << "TTL: "<< pair.second <<endl;
        }
    }

};


#endif //LIBRARY_SYSTEM_STUDENT_H
