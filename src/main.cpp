#include <iostream>
using namespace std;

#include "../include/saisie.h"
#include "../include/joke.h"

void testReadingNumberOfPages()
{
    cout << "Test of the first function to read pages (no argument) :" << endl;
    int pageWithoutArgument = readNumberOfPages();
    cout << "You entered : " << pageWithoutArgument << endl;

    /********/

    cout << "Test of the first function to read pages (argument by address) :" << endl;
    int pageArgumentByAddress;
    readNumberOfPages(&pageArgumentByAddress);
    cout << "You entered : " << pageArgumentByAddress << endl;

    /********/
    cout << "Test of the first function to read pages (argument by value) :" << endl;
    int pageArgumentByValue = 0;
    readNumberOfPages(pageArgumentByValue);
    cout << "You entered : " << pageArgumentByValue << endl;

    /********/
    cout << "Test of the first function to read pages (argument by reference) :" << endl;
    int pageArgumentByReference;
    readNumberOfPagesRef::readNumberOfPages(pageArgumentByReference);
    cout << "You entered : " << pageArgumentByReference << endl;
}

void testCreatingBook()
{
    Book book;
    book = createBook();
}

void testCreateLibrary()
{
    int sizeLibrary;
    cout << "Enter the size of the library : ";
    cin >> sizeLibrary;

    Book *books = new Book[sizeLibrary];

    createLibrary(books, sizeLibrary);
}

void testPrintLibrary()
{
    Book books[] = {
        {"The Art of Computer Programming", 256},
        {"Tom Sawyer", 128},
        {"To Kill a Mockingbird", 281}};

    int sizeLibrary = sizeof(books) / sizeof(books[0]);

    printLibrary(books, sizeLibrary);
}

void testSwapNumberOfPages()
{
    Book book1 = {"The Art of Computer Programming", 256};
    Book book2 = {"Tom Sawyer", 128};

    Book &book1ref = book1;
    Book &book2ref = book2;

    cout << "Before swap :" << endl;
    cout << book1.title << " has " << book1.numberOfPages << " pages." << endl;
    cout << book2.title << " has " << book2.numberOfPages << " pages." << endl;

    swapNumberOfPages(book1ref, book2ref);

    cout << "After swap :" << endl;
    cout << book1.title << " has " << book1.numberOfPages << " pages." << endl;
    cout << book2.title << " has " << book2.numberOfPages << " pages." << endl;
}

void testLongestAndShortestBook()
{
    Book books[] = {
        {"Book A", 150},
        {"Book B", 300},
        {"Book C", 100}};
    int sizeLibrary = 3;

    Book &longestBook = findLongestBook(books, sizeLibrary);
    Book &shortestBook = findShortestBook(books, sizeLibrary);

    cout << "The longest book is: " << longestBook.title << " with " << longestBook.numberOfPages << " pages." << endl;
    cout << "The shortest book is: " << shortestBook.title << " with " << shortestBook.numberOfPages << " pages." << endl;
}

void testJoke()
{
    Book books[] = {
        {"Book A", 150},
        {"Book B", 300},
        {"Book C", 100}};
    int sizeLibrary = 3;

    cout << "Before the joke : " << endl;
    Book &longestBook = findLongestBook(books, sizeLibrary);
    Book &shortestBook = findShortestBook(books, sizeLibrary);

    cout << "The longest book is: " << longestBook.title << " with " << longestBook.numberOfPages << " pages." << endl;
    cout << "The shortest book is: " << shortestBook.title << " with " << shortestBook.numberOfPages << " pages." << endl;

    swapNumberPagesLongestAndShortest(books, sizeLibrary);

    cout << "--------------------" << endl;
    cout << "After the joke :" << endl;
    printLibrary(books, sizeLibrary);
}

void testJokeBis()
{
    Book books[] = {
        {"Book A", 150},
        {"Book B", 300},
        {"Book C", 100}};
    int sizeLibrary = 3;

    cout << "Before the joke bis : " << endl;
    Book &longestBook = findLongestBook(books, sizeLibrary);
    Book &shortestBook = findShortestBook(books, sizeLibrary);

    cout << "The longest book is: " << longestBook.title << " with " << longestBook.numberOfPages << " pages." << endl;
    cout << "The shortest book is: " << shortestBook.title << " with " << shortestBook.numberOfPages << " pages." << endl;

    swapNumberPagesLongestAndShortestBis(books, sizeLibrary);

    cout << "--------------------" << endl;
    cout << "After the joke bis :" << endl;
    printLibrary(books, sizeLibrary);
}

int main()
{
    // testReadingNumberOfPages();
    // testCreatingBook();
    // testCreateLibrary();
    // testPrintLibraty();
    // testSwapNumberOfPages();
    // testLongestAndShortestBook();
    // testJoke();
    // testJokeBis();
}