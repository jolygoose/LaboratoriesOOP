#pragma once

#ifndef _POINT_H_
#define _POINT_H_

class Point
{
private:
	double _x;
	double _y;

public:
	void SetXPoint(double x);

	void SetYPoint(double y);

	double GetXPoint();

	double GetYPoint();

	Point();

	Point(double x, double y);
};

#endif // !_POINT_H_