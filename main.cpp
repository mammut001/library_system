#include <iostream>
#include <vector>
#include "Book.h"
#include <map>

#include "Shelf.h"
#include "University.h"
#include "Student/Student.h"
#include "Library.h"
#include <chrono>
#include <thread>

using namespace std::chrono;
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


    Shelf fiction("Fiction");
    Shelf nonfiction("Nonfiction");

    fiction.addBook(myGenreBook);
    fiction.addBook(myBook);
    // myShelf.printAllBooks();
    Book nonfictionBook1;
    nonfictionBook1.name = "Sapiens: A Brief History of Humankind";
    nonfictionBook1.location = "Library Section C";
    nonfictionBook1.isbn = "978-0099590088";

    Book nonfictionBook2;
    nonfictionBook2.name = "Educated";
    nonfictionBook2.location = "Library Section D";
    nonfictionBook2.isbn = "978-0399590504";

    Book nonfictionBook3;
    nonfictionBook3.name = "The Immortal Life of Henrietta Lacks";
    nonfictionBook3.location = "Library Section E";
    nonfictionBook3.isbn = "978-1400052189";


    nonfiction.addBook(nonfictionBook1);
    nonfiction.addBook(nonfictionBook2);
    nonfiction.addBook(nonfictionBook3);


//    nonfiction.printAllBooks();
//
//
//    fiction.printAllBooks();

    Student student1("10010001", "John Doe");
    Student student2("90000102", "Jane Smith");
    cout << 1198 << endl;

    Library macodrum;
    macodrum.addBorrowedBook("978-0-316-76948-1",student1.getId());
    macodrum.addBorrowedBook("978-0-316-76948-2",student1.getId());
    macodrum.addBorrowedBook("978-0-316-76948-3",student1.getId());
    macodrum.addBorrowedBook("978-0-316-76948-4",student1.getId());
    macodrum.addBorrowedBook("978-0-316-76948-5",student1.getId());

    macodrum.addBorrowedBook("1000-0-316-76948-1",student2.getId());
    macodrum.addBorrowedBook("1000-0-316-76948-2",student2.getId());
    macodrum.addBorrowedBook("1000-0-316-76948-3",student2.getId());


    macodrum.printBorrowedBooks();
    std::this_thread::sleep_for(seconds(15)); // let the thread sleep for 15 seconds and then return the book

    macodrum.returnBook("978-0-316-76948-1",student1.getId());


    student1.printBorrowedBooks(macodrum.getBorrowedBooks());

//    student1.printBorrowedBooks(macodrum.getBorrowedBooks());
//    student2.printBorrowedBooks(macodrum.getBorrowedBooks());

//    fiction.printBorrowedBooks();




// ------------------------------
//    University carleton;
//    carleton.addMember("Registrar's Office");
//    carleton.addMember("School Of Computer Science");
//    carleton.addMember("Department of Mathematics");
//    carleton.addMember("Library Services");
//    carleton.addMember("Student Affairs");
//    carleton.addMember("Research and Innovation Office");
//
//    carleton.printUnits();
    return 0;

}
