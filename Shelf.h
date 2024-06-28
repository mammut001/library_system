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

    //map key is book isbn(string) : val: number of copies.
    map<string,int> shelf;
    // This boolean keeps track of the initialization status of a shelf.
    // If it's set to false, we can preset its book and amount.
    // No other book will be added unless it's preset.
    bool isInitialized;




public:
    Shelf(string id):shelfId(std::move(id)), isInitialized(false){};
    string getShelfId() const;

    void setShelfId(const string& id);
    void setInitialAmt(const string& isbn, int amt);
    void setIsInitializedTrue(){
        isInitialized = true;

    }

    vector<Book> getBooks() const {
        return books;
    }
    bool updateNumberOfCopies(bool action,const Book &book);

    void addBook(const Book& book);
    void removeBook(const Book& book);

    void checkStock(){
        cout<<"Shelf ID: " << shelfId << endl;
        for( auto &pair :shelf){
            cout << "ISBN" << pair.first <<" and has " <<pair.second<<" copies available. "<<endl;
        }
    }
    void printAllBooks() const {
        cout<< shelfId <<endl;
        std::cout << "Total number of books on the shelf: " << getShelfSize() << std::endl;
        for (const auto& book: books) {
            Book::print(book);
            cout << "---------------------" << endl;

        }
    }
    int getShelfSize() const;






};



#endif //SHELF_H
