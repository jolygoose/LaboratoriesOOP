#pragma once

#ifndef _IOBOOK_H_
#define _IOBOOK_H_

#include "Book.h"

/// @brief Функция считывания информации о книге с консоли
/// 
/// @param book - книга
void ReadBookFromConsole(Book& book);

/// @brief Функция вывода информации о книге на экран
/// 
/// @param book - книга
void WriteBookToConsole(Book& book);

#endif //!_IOBOOK_H_