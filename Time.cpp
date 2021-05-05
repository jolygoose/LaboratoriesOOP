#include "Time.h"
#include "IOTime.h"

void Time::SetYear(int year)
{
	if ((year > 2021) || (year < 0))
	{
		throw exception("Count of years cannot be less than 0");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if ((month > 12) || (month < 0))
	{
		throw exception("Count of Months can't be more than 12");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if ((day > 30) || (day < 0))
	{
		throw exception("Count of Days can't be more than 30");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if ((hour > 24) || (hour < 0))
	{
		throw exception("Count of Hours can't be more than 24");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if ((minute > 60) || (minute < 0))
	{
		throw exception("Count of Minutes can't be more than 60");
	}
	this->_minute = minute;
}


int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}


Time::Time()
{

}

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}