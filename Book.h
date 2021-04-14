#pragma once

#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include <string>

#include "Common.h"

using namespace std;

struct Book
{
	string Title;
	int YearPublication;
	int CountPages;
	string Authors[10];
	int CountAuthors;
};

void SetYearPublication(Book& book, int yearPublication);

void SetCountPages(Book& book, int countPages);

void SetCountAuthors(Book& book, int countAuthors);

void DemoBook();

void ReadBookFromConsole(Book& book);

void WriteBookToConsole(Book& book);

int FindBookByAuthor(Book* books, int booksCount, string author);

#endif //!_BOOK_H_