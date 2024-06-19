//
// Created by doge-to-the-moon on 2024-06-18.
//

#include "Book.h"

void Book::updateCopy(const bool action, const int updateCopies) {
    // if action true, then add, else subtract.
    if(action) {
        copies += updateCopies;
    }
    else {
        copies -= updateCopies;
    }
}

void Book::setLocation(const string &newLocation) {
    location = newLocation;

}

