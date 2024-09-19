#ifndef JOKE_H
#define JOKE_H

#include "saisie.h"

void swapNumberOfPages(Book &book1, Book &book2);

Book &findLongestBook(Book books[], int sizeLibrary);

Book &findShortestBook(Book books[], int sizeLibrary);

void swapNumberPagesLongestAndShortest(Book books[], int sizeLibrary);

void swapNumberPagesLongestAndShortestBis(Book books[], int sizeLibrary);

#endif // JOKE_H