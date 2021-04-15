#pragma once

#ifndef _POINT_H_
#define _POINT_H_

/// @brief Класс точки
class Point
{
private:
	// Координата x
	double _x;
	// Координата y
	double _y;

public:
	/// @brief Функция-сеттер координаты x
	/// 
	/// @param x - координата x
	void SetXPoint(double x);

	/// @brief Функция-сеттер координаты y
	/// 
	/// @param y - координата y
	void SetYPoint(double y);

	/// @brief Функция-геттер координаты x
	double GetXPoint();

	/// @brief Функция-геттер координаты y
	double GetYPoint();

	/// @brief Пустой конструктор класса точка
	Point();

	/// @brief Функция-конструктор класса точка
	Point(double x, double y);
};

#endif // !_POINT_H_