#include <iostream>
#include <vector>
#include "Book.h"
#include <map>

#include "Shelf.h"
#include "University.h"
using std::vector;
using std::map;
using std::string;
using std::cout;
using std::endl;

int main() {
//    Book myBook;
//    myBook.name = "The Catcher in the Rye";
//    myBook.location = "Library Section A";
//    myBook.isbn = "978-0-316-76948-0";
//
//    Genre myGenreBook;
//    myGenreBook.name = "Fish";
//    myGenreBook.location = "Library Section B";
//    myGenreBook.isbn = "978-0-316-76948-321910";
//    myGenreBook.genreName = "Fiction";
//
//    myGenreBook.setLocation("Library Section B");
//
//
//    Shelf myShelf("shelf1");
//    myShelf.addBook(myGenreBook);
//    myShelf.addBook(myBook);
//    // myShelf.printAllBooks();
//
//    myShelf.removeBook(myBook);
//    myShelf.printAllBooks();
// ------------------------------
    University carleton;
    carleton.addMember("Registrar");
    carleton.addMember("School Of Computer Science");
    carleton.printUnits();
    return 0;

}
