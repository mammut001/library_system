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
using namespace std::chrono;

class Library;
class Student {
private:
    string id; // only key
    string name;

public:

    Student(string id, string name):id(std::move(id)), name(std::move(name)){};
    string getId (){
        return id;
    }
    string getName(){
        return name;
    }

    static void printBorrowedBooks(const shared_ptr<map<string,int>> &borrowedBooks) {

        for (auto const & pair: *borrowedBooks){
            cout<< "ISBN:" << pair.first << "TTL: "<< pair.second <<endl;
        }
    }
    static void printBorrowedVector(const vector<map<string,system_clock::time_point >> & vectors){
        for (const auto& i : vectors){
            for(const auto& j: i){

                //iter k and v in the map
                std::time_t borrow_time = std::chrono::system_clock::to_time_t(j.second);

                cout << "ISBN is: " << "and borrowed time at" << borrow_time <<"  "<<endl;
            }
        }
    }

    void printBorrowedBooks(std::shared_ptr<map<string,vector<map<string,system_clock::time_point>>>> borrowedBooks ){
        cout << "Borrowed Books" << endl;
        for (auto const & student: *borrowedBooks){
            if (!id.compare(student.first)){
                //only print if they are equal.
                std::cout << "Student ID: " << student.first << std::endl;
                printBorrowedVector(student.second);
            }

        }

    }


};


#endif //LIBRARY_SYSTEM_STUDENT_H
