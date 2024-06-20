#include <iostream>
#include <vector>
#include "Book.h"
#include <map>

#include "Shelf.h"

using std::vector;
using std::map;
using std::string;
using std::cout;
using std::endl;

int main() {
    Book myBook;
    myBook.name = "The Catcher in the Rye";
    myBook.location = "Library Section A";
    myBook.isbn = "978-0-316-76948-0";
    myBook.index = -1;

    Genre myGenreBook;
    myGenreBook.name = "The Catcher in the Rye";
    myGenreBook.location = "Library Section A";
    myGenreBook.isbn = "978-0-316-76948-0";
    myGenreBook.genreName = "Fiction";
    myGenreBook.index = -1;

    myGenreBook.setLocation("Library Section B");


    Shelf myShelf("shelf1");
    myShelf.addBook(myGenreBook);
    myShelf.addBook(myBook);
    // myShelf.printAllBooks();

    myShelf.removeBook(myBook);
    myShelf.printAllBooks();

    return 0;

}
