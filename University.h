//
// Created by doge-to-the-moon on 2024-06-22.
//

#ifndef LIBRARY_SYSTEM_UNIVERSITY_H
#define LIBRARY_SYSTEM_UNIVERSITY_H
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <iostream>

using std::string;
using std::vector;
using std::move;
using std::map;
using std::cout;
using std::endl;


class University {
private:
    map<int,string> units;
public:
    void addMember(string name);
    void printUnits();
    int unitSize();




};


#endif //LIBRARY_SYSTEM_UNIVERSITY_H
