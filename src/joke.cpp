#include <iostream>
using namespace std;

#include "../include/saisie.h"
#include "../include/joke.h"

void swapNumberOfPages(Book &book1, Book &book2)
{
    int temp = book1.numberOfPages;
    book1.numberOfPages = book2.numberOfPages;
    book2.numberOfPages = temp;
}

Book &findLongestBook(Book books[], int sizeLibrary)
{
    int longestIndex = 0;
    for (int i = 0; i < sizeLibrary; ++i)
    {
        if (books[i].numberOfPages > books[longestIndex].numberOfPages)
        {
            longestIndex = i;
        }
    }

    return books[longestIndex];
}

Book &findShortestBook(Book books[], int sizeLibrary)
{
    int shortestIndex = 0;
    for (int i = 0; i < sizeLibrary; ++i)
    {
        if (books[i].numberOfPages < books[shortestIndex].numberOfPages)
        {
            shortestIndex = i;
        }
    }
    return books[shortestIndex];
}

void swapNumberPagesLongestAndShortest(Book books[], int sizeLibrary)
{
    swapNumberOfPages(findLongestBook(books, sizeLibrary), findShortestBook(books, sizeLibrary));
}

void swapNumberPagesLongestAndShortestBis(Book books[], int sizeLibrary)
{
    Book &longest = findLongestBook(books, sizeLibrary);
    Book &shortest = findShortestBook(books, sizeLibrary);

    swapNumberOfPages(longest, shortest);
}
