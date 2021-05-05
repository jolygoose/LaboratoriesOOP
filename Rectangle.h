#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <iostream>
#include <exception>

#include "Point.h"

using namespace std;

/// @brief Класс прямоугольник
class Rectangle
{
private:
	// Длина
	double _length;
	// Ширина
	double _width;
	// Центральная точка
	Point _centerPoint;

public:
	/// @brief Функция-сеттер длины прямоугольника
	/// 
	/// @param length - длина
	void SetLength(double length);

	/// @brief Функция-сеттер ширины прямоугольника
	/// 
	/// @param width - ширина
	void SetWidth(double width);

	/// @brief Функция-сеттер координаты x центральной точки прямоугольника
	/// 
	/// @param x - координата x центра прямоугольника
	void SetXPoint(double x);

	/// @brief Функция-сеттер координаты y центральной точки прямоугольника
	/// 
	/// @param y - координата y центра прямоугольника
	void SetYPoint(double y);

	/// @brief Функция-геттер центральной точки прямоугольника
	Point GetCenterPoint();

	/// @brief Функция-геттер длины прямоугольника
	double GetLength();

	/// @brief Функция-геттер ширины прямоугольника
	double GetWidth();

	/// @brief Пустой конструктор класса прямоугольник
	Rectangle();

	/// @brief Конструктор класса прямоугольник
	/// 
	/// @param length - длина
	/// @param width - ширина
	/// @param x - координата x центра прямоугольника
	/// @param y - координата y центра прямоугольника
	Rectangle(double length, double width, double x, double y);

	/// @brief Функция работы с прямоугольником с центральной точкой
	void RectangleWithPoint();
};

/// @brief Точка входа в блок работы с прямоугольником с точкой
void DemoRectangleWithPoint();

#endif // !_RECTANGLE_H_