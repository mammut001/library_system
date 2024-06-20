//
// Created by doge-to-the-moon on 2024-06-18.
//

#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::string;
using std::cout;
using std::endl;


class Book {
public:
    int index;
    string name;
    string location;
    string isbn;


    static void print(const Book& book) {
        cout << "Name: " << book.name << endl;
        cout << "Location: " << book.location << endl;
        cout << "ISBN: " << book.isbn << endl;
    }
    void setLocation(const string& newLocation);
    void updateCopy(bool action, int updateCopies);
};


class Genre: public Book {
public:
    string genreName;

    static void printGenre(const Genre& genre) {
        Book::print(genre);
        cout << genre.genreName << endl;
        cout << "-----------------" <<endl;


    }
};

#endif //BOOK_H
