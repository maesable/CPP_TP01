#include <iostream>
using namespace std;

#include "../include/saisie.h"

int readNumberOfPages()
{
    int p;

    cout << "Enter the number of pages (between 2 and 2000) :" << endl;
    cin >> p;
    if (p >= 2 && p <= 2000)
    {
        return p;
    }
    else
    {
        cout << "The number of pages is incorrect! Try again." << endl;
        exit(0);
    }
}

int readNumberOfPages(int *p)
{
    cout << "Enter the number of pages (between 2 and 2000) :" << endl;
    cin >> *p;
    if (*p >= 2 && *p <= 2000)
    {
        return *p;
    }
    else
    {
        cout << "The number of pages is incorrect! Try again." << endl;
        exit(0);
    }
}

int readNumberOfPages(int p)
{
    cout << "Enter the number of pages (between 2 and 2000) :" << endl;
    cin >> p;
    if (p >= 2 && p <= 2000)
    {
        return p;
    }
    else
    {
        cout << "The number of pages is incorrect! Try again." << endl;
        exit(0);
    }
}

namespace readNumberOfPagesRef
{
    int readNumberOfPages(int &p)
    {
        cout << "Enter the number of pages (between 2 and 2000) :" << endl;
        cin >> p;
        if (p >= 2 && p <= 2000)
        {
            return p;
        }
        else
        {
            cout << "The number of pages is incorrect! Try again." << endl;
            exit(0);
        }
    }
}

Book createBook()
{
    Book book;

    cout << "Enter the title of the book :" << endl;
    cin >> book.title;

    book.numberOfPages = readNumberOfPages();

    return book;
}

void createLibrary(Book books[], int sizeLibrary)
{
    for (int i = 0; i < sizeLibrary; ++i)
    {
        cout << "Book n° " << i + 1 << " :" << endl;
        books[i] = createBook();
    }
}

void printBook(Book book)
{
    cout << "Title : " << book.title << endl;
    cout << "Number of pages : " << book.numberOfPages << endl;
    cout << "---------------------------------" << endl;
}

void printLibrary(Book books[], int sizeLibrary)
{
    cout << "Size of the library : " << sizeLibrary << endl;

    for (int i = 0; i < sizeLibrary; ++i)
    {
        printBook(books[i]);
    }
}