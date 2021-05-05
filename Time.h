#pragma once

#ifndef _TIME_H_
#define _TIME_H_

#include <exception>
#include <iostream>

using namespace std;

/// @brief Класс времени
class Time
{
private:
	// Годы
	int _year;
	// Месяцы
	int _month;
	// Дни
	int _day;
	// Часы
	int _hour;
	// Минуты
	int _minute;

public:
	/// @brief Функция-сеттер количества лет
	/// 
	/// @param year - годы
	void SetYear(int year);

	/// @brief Функция-сеттер количества месяцев
	/// 
	/// @param month - месяцы
	void SetMonth(int month);

	/// @brief Функция-сеттер количества дней
	/// 
	/// @param day - дни
	void SetDay(int day);

	/// @brief Функция-сеттер количества часов
	/// 
	/// @param hour - часы
	void SetHour(int hour);

	/// @brief Функция-сеттер количества минут
	/// 
	/// @param minute - минуты
	void SetMinute(int minute);

	/// @brief Функция-геттер количества лет
	int GetYear();

	/// @brief Функция-геттер количества месяцев
	int GetMonth();

	/// @brief Функция-геттер количества дней
	int GetDay();

	/// @brief Функция-геттер количества часов
	int GetHour();

	/// @brief Функция-геттер количества минут
	int GetMinute();

	/// @brief Пустой конструктор класса время
	Time();

	/// @brief Конструктор класса время
	/// 
	/// @param year - годы
	/// @param month - месяцы
	/// @param day - дни
	/// @param hour - часы
	/// @param minute - минуты
	Time(int year, int month, int day, int hour, int minute);
};

#endif // !_TIME_H_