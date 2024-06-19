//
// Created by doge-to-the-moon on 2024-06-18.
//

#ifndef SHELF_H
#define SHELF_H
#include <string>
#include <utility>
#include <vector>
#include "book.h"

using std::string;
using std::vector;
using std::move;

class Shelf {
private:
    string shelfId;
    vector<Book> books;

public:
    Shelf(string  id): shelfId(move(id)){}
    string getShelfId() const {
        return shelfId;
    }

    void setShelfId(const string& id) {
        shelfId = id;
    }
    vector<Book> getBooks() const {
        return books;
    }



};



#endif //SHELF_H
