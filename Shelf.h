//
// Created by doge-to-the-moon on 2024-06-18.
//

#ifndef SHELF_H
#define SHELF_H
#include "Book.h"
#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

using std::make_shared;
using std::shared_ptr;
using std::string;
using std::vector;
using std::move;
using std::map;

class Shelf {
private:
    string shelfId;
    vector<Book> books;

    map<string,int> shelf;


    std::shared_ptr<map<string,int>> borrowedBooks;

public:
    Shelf(string id):shelfId(std::move(id)), borrowedBooks(std::move(make_shared<map<string,int>>())){};
    string getShelfId() const;

    void setShelfId(const string& id);

    vector<Book> getBooks() const {
        return books;
    }
    bool updateNumberOfCopies(bool action,const Book &book);
    void addBook(const Book& book);
    void removeBook(const Book& book);
    void addBorrowedBook(const string& isbn);

    void printAllBooks() const {
        cout<< shelfId <<endl;
        std::cout << "Total number of books on the shelf: " << getShelfSize() << std::endl;
        for (const auto& book: books) {
            Book::print(book);
            cout << "---------------------" << endl;

        }
    }
    int getShelfSize() const;
    shared_ptr<map<string,int>> getBorrowedBooks(){
        return borrowedBooks;
    };

    void printBorrowedBooks(){
        cout << "Borrowed Books" <<endl;
        for (auto const & pair: *borrowedBooks){
            cout<< "ISBN:" << pair.first << "TTL: "<< pair.second <<endl;
        }
    }



};



#endif //SHELF_H
