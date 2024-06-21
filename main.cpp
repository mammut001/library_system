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

    Genre myGenreBook;
    myGenreBook.name = "Fish";
    myGenreBook.location = "Library Section B";
    myGenreBook.isbn = "978-0-316-76948-321910";
    myGenreBook.genreName = "Fiction";

    myGenreBook.setLocation("Library Section B");


    Shelf myShelf("shelf1");
    myShelf.addBook(myGenreBook);
    myShelf.addBook(myBook);
    // myShelf.printAllBooks();

    myShelf.removeBook(myBook);
    myShelf.printAllBooks();

    return 0;

}
