#include "Book.h"
#include "IOBook.h"

void SetYearPublication(Book& book, int yearPublication)
{
	book.YearPublication = yearPublication;
	if (book.YearPublication > 2021)
	{
		throw exception("Error: year of publication cannot be more than current year.");
	}
}

void SetCountPages(Book& book, int countPages)
{
	book.CountPages = countPages;
}

void SetCountAuthors(Book& book, int countAuthors)
{
	book.CountAuthors = countAuthors;
	if (book.CountAuthors > 10)
	{
		throw exception("Error: Count of authors is so big. Try again.");
	}
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	int indexResult = -1;
	for (int i = 0; i < booksCount; ++i)
	{
		for (int j = 0; j < books[i].CountAuthors; ++j)
		{
			if (books[i].Authors[j] == author)
			{
				indexResult = i;
				return indexResult;
			}
		}
	}
	return indexResult;
}


void DemoBook()
{
	const int maxBooks = 5;
	Book book[maxBooks];
	int countBooks;
	while (true)
	{
		cout << "Enter a count of books in range 1 - 5: ";
		countBooks = GetCorrectUnsignedIntegerValue();
		if ((countBooks <= maxBooks) && (countBooks > 0))
		{
			break;
		}
		cerr << endl << "Error: Count of books should be in the range of 1-5" << endl;
	}
	for (int i = 0; i < countBooks; ++i)
	{
		cout << endl << "\tInformation about [" << i + 1 << "] book:" << endl;
		ReadBookFromConsole(book[i]);
	}
	cout << endl;
	for (int i = 0; i < countBooks; ++i)
	{
		WriteBookToConsole(book[i]);
	}
	cout << "Enter the author to search for the book: ";
	string author;
	getline(cin, author);
	cout << endl << "Author's book: ";
	if (FindBookByAuthor(book, countBooks, author) != -1)
	{
		WriteBookToConsole(book[FindBookByAuthor(book, countBooks, author)]);
	}
	else
	{
		cout << "There is no book with this author";
	}
	cout << endl << endl;
}