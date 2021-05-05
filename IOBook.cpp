#include "IOBook.h"

void ReadBookFromConsole(Book& book)
{
	cout << "Enter a title: ";
	getline(cin, book.Title);
	cout << "Enter a year of publication: ";
	SetYearPublication(book, GetCorrectUnsignedIntegerValue());
	cout << "Enter a count pages: ";
	SetCountPages(book, GetCorrectUnsignedIntegerValue());
	cout << "Enter a count of authors (1 - 10): ";
	SetCountAuthors(book, GetCorrectUnsignedIntegerValue());
	for (int i = 0; i < book.CountAuthors; ++i)
	{
		cout << "Enter a Author: ";
		getline(cin, book.Authors[i]);
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.CountAuthors; ++i)
	{
		cout << book.Authors[i];
		if (i < book.CountAuthors - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << " | ";
		}
	}
	cout << "Book: " << book.Title << ", ["
		<< book.YearPublication << "] year of publication, "
		<< book.CountPages << " pages." << endl;
}