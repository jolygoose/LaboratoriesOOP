#pragma once

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <iostream>
#include <exception>

#include "Point.h"

using namespace std;

class Rectangle
{
private:
	double _length;
	double _width;
	Point _centerPoint;

public:
	//TODO: нет определения для этой сигнатуры
	void SetRectangle(double length, double width, double x, double y);

	void SetLength(double length);

	void SetWidth(double width);

	void SetXPoint(double x);

	void SetYPoint(double y);

	Point GetCenterPoint();

	double GetLength();

	double GetWidth();

	Rectangle();

	Rectangle(double length, double width, double x, double y);

	void ShowRectangle();

	void RectangleWithPoint();
};

void DemoRectangleWithPoint();

#endif // !_RECTANGLE_H_