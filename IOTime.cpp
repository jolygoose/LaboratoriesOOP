#include "IOTime.h"

using namespace std;

void DisplayTime::ShowTime(Time& time)
{
	if (time.GetDay() < 10)
	{
		cout << "0";
	}
	cout << time.GetDay() << ".";
	if (time.GetMonth() < 10)
	{
		cout << "0";
	}
	cout << time.GetMonth() << "."
		<< time.GetYear() << " [";
	if (time.GetHour() < 10)
	{
		cout << "0";
	}
	cout << time.GetHour() << ":";
	if (time.GetMinute() < 10)
	{
		cout << "0";
	}
	cout << time.GetMinute() << "]";
}