#ifndef SAISIE_H
#define SAISIE_H

typedef struct Book
{
    char title[50];
    int numberOfPages;
} Book;

int readNumberOfPages();

int readNumberOfPages(int *p);

int readNumberOfPages(int p);

namespace readNumberOfPagesRef
{
    int readNumberOfPages(int &p);
}
Book createBook();

void createLibrary(Book[], int sizeLibrary);

void printBook(Book book);

void printLibrary(Book books[], int sizeLibrary);

#endif // SAISIE_H