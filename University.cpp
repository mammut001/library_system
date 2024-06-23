//
// Created by doge-to-the-moon on 2024-06-22.
//

#include "University.h"

#include <utility>
using std::string;
using std::vector;
using std::move;


void University::addMember(string name) {
    const int size = unitSize();
    units[size] = std::move(name);
}
void University::printUnits() {
    for( const auto d: units){
        cout << "KEY is " << d.first <<  " Value is " << d.second<<  endl;
    }
}

int University::unitSize()  {
    return units.size();
}