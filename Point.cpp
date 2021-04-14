#include "Point.h"

void Point::SetXPoint(double x)
{
	this->_x = x;
}

void Point::SetYPoint(double y)
{
	this->_y = y;
}

double Point::GetXPoint()
{
	return this->_x;
}

double Point::GetYPoint()
{
	return this->_y;
}

Point::Point()
{

}

Point::Point(double x, double y)
{
	this->SetXPoint(x);
	this->SetYPoint(y);
}