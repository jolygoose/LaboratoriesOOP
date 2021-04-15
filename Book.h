#pragma once

#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include <string>

#include "Common.h"

using namespace std;

/// @brief Структура книги
struct Book
{
	// Название
	string Title;
	// Год выпуска
	int YearPublication;
	// Количество страниц
	int CountPages;
	// Список авторов
	string Authors[10];
	// Количество авторов
	int CountAuthors;
};

/// @brief Функция-сеттер года выпуска
/// 
/// @param book - книга
/// @param yearPublication - год публикации
void SetYearPublication(Book& book, int yearPublication);

/// @brief Функция-сеттер количества страниц
/// 
/// @param book - книга
/// @param countPages - количество страниц
void SetCountPages(Book& book, int countPages);

/// @brief Функция-сеттер количества авторов
/// 
/// @param book - книга
/// @param countAuthors - количество авторов
void SetCountAuthors(Book& book, int countAuthors);

/// @brief Функция считывания информации о книге с консоли
/// 
/// @param book - книга
void ReadBookFromConsole(Book& book);

/// @brief Функция вывода информации о книге на экран
/// 
/// @param book - книга
void WriteBookToConsole(Book& book);

/// @brief Функция поиска книги определённого автора
/// 
/// @param books - список книг
/// @param booksCount - количество книг
/// @param author - искомый автор
/// 
/// @retval -1 - элемент не найден
/// 
/// @return Результат поиска книги
int FindBookByAuthor(Book* books, int booksCount, string author);

/// @brief Функция для работы со структурой книги
void DemoBook();

#endif //!_BOOK_H_