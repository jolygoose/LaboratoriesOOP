#include "IORectangle.h"

using namespace std;

void DisplayRectangle::ShowRectangle(Rectangle* rectangle)
{
	cout << "X = " << rectangle->GetCenterPoint().GetXPoint()
		<< "\t| Y = " << rectangle->GetCenterPoint().GetYPoint()
		<< "\t| Length = " << rectangle->GetLength()
		<< "\t| Width = " << rectangle->GetWidth() << endl << endl;
}