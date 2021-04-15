#include "Rectangle.h"

void Rectangle::SetLength(double length)
{
	if (length < 0)
	{
		throw exception("Length cannot be a negative");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw exception("Width cannot be a negative");
	}
	this->_width = width;
}

void Rectangle::SetXPoint(double x)
{
	this->_centerPoint.SetXPoint(x);
}

void Rectangle::SetYPoint(double y)
{
	this->_centerPoint.SetYPoint(y);
}


Point Rectangle::GetCenterPoint()
{
	return this->_centerPoint;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}


Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetXPoint(x);
	this->SetYPoint(y);
}

//TODO: все что ниже к логике класса не относится, вынести
void Rectangle::ShowRectangle()
{
	cout << "X = " << this->GetCenterPoint().GetXPoint()
		<< "\t| Y = " << this->GetCenterPoint().GetYPoint()
		<< "\t| Length = " << this->GetLength()
		<< "\t| Width = " << this->GetWidth() << endl << endl;
}

void Rectangle::RectangleWithPoint()
{
	const int rectanglesSize = 5;
	Rectangle rectangles[rectanglesSize];
	rectangles[0].Rectangle::Rectangle(25.4, 1.1, 5.0, 10.7);
	rectangles[1].Rectangle::Rectangle(50.0, 7.3, 12.0, -10.7);
	rectangles[2].Rectangle::Rectangle(4.7, 43.6, -7.0, 16.2);
	rectangles[3].Rectangle::Rectangle(9.2, 23.9, 4.0, 4.52);
	rectangles[4].Rectangle::Rectangle(17.9, 38.0, -3.0, -2.1);
	for (int i = 0; i < rectanglesSize; ++i)
	{
		cout << "[" << i + 1 << "] rectangle:" << endl;
		rectangles[i].ShowRectangle();
	}
	double xCenter = 0;
	double yCenter = 0;
	for (int i = 0; i < rectanglesSize; ++i)
	{
		xCenter += rectangles[i].GetCenterPoint().GetXPoint();
		yCenter += rectangles[i].GetCenterPoint().GetYPoint();
	}
	cout << "The average of all the centers of the rectangles:" << endl
		<< "Xcenter = " << xCenter / rectanglesSize << " | "
		<< "Ycenter = " << yCenter / rectanglesSize << endl << endl;
}

void DemoRectangleWithPoint()
{
	Rectangle rectangles;
	rectangles.RectangleWithPoint();
}