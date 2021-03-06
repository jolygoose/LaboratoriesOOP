#include "Flight.h"
#include "IOFlight.h"

void Flight::SetFlight(int numberFlight, string departurePoint, string arrivePoint,
	Time* departureTime, Time* arriveTime)
{
	this->_numberFlight = numberFlight;
	this->_departurePoint = departurePoint;
	this->_arrivePoint = arrivePoint;
	this->_departureTime = *departureTime;
	this->_arriveTime = *arriveTime;
	bool isTimeCorrect = true; 
	if (this->_departureTime.GetYear() == this->_arriveTime.GetYear())
	{
		if (this->_departureTime.GetMonth() == this->_arriveTime.GetMonth())
		{
			if (this->_departureTime.GetDay() == this->_arriveTime.GetDay())
			{
				if (this->_departureTime.GetHour() == this->_arriveTime.GetHour())
				{
					if (this->_departureTime.GetMinute() > this->_arriveTime.GetMinute())
					{
						isTimeCorrect = false;
					}
				}
				else if (this->_departureTime.GetHour() > this->_arriveTime.GetHour())
				{
					isTimeCorrect = false;
				}
			}
			else if (this->_departureTime.GetDay() > this->_arriveTime.GetDay())
			{
				isTimeCorrect = false;
			}
		}
		else if (this->_departureTime.GetMonth() > this->_arriveTime.GetMonth())
		{
			isTimeCorrect = false;
		}
	}
	else if (this->_departureTime.GetYear() > this->_arriveTime.GetYear())
	{
		isTimeCorrect = false;
	}
	if (!isTimeCorrect)
	{
		throw exception("The arrival time cannot be earlier than the departure time");
	}
}

int Flight::GetFlightTimeMinutes()
{
	int minutes = this->_arriveTime.GetMinute() - this->_departureTime.GetMinute();
	int hours = this->_arriveTime.GetHour() - this->_departureTime.GetHour();
	if (hours < 0)
	{
		hours = 24 + hours;
	}
	if (minutes < 0)
	{
		--hours;
		minutes = 60 + minutes;
	}
	return (hours * 60 + minutes);
}

int Flight::GetNumberFlight()
{
	return this->_numberFlight;
}

string Flight::GetDeparturePoint()
{
	return this->_departurePoint;
}

string Flight::GetArrivePoint()
{
	return this->_arrivePoint;
}

Time Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time Flight::GetArriveTime()
{
	return this->_arriveTime;
}

Flight::Flight()
{

}

Flight::Flight(int numberFlight, string departurePoint, string arrivePoint,
	Time* departureTime, Time* arriveTime)
{
	this->SetFlight(numberFlight, departurePoint, arrivePoint, departureTime, arriveTime);
}


void Flight::DemoFlightWithTime()
{
	const int countFlights = 5;
	Flight flights[countFlights];
	Time departureTime[countFlights];
	Time arriveTime[countFlights];

	departureTime[0].Time::Time(2021, 7, 7, 11, 30);
	arriveTime[0].Time::Time(2021, 7, 7, 14, 20);
	flights[0].Flight::Flight(1050, "Moscow", "Berlin", &departureTime[0], &arriveTime[0]);

	departureTime[1].Time::Time(2021, 9, 26, 7, 15);
	arriveTime[1].Time::Time(2021, 9, 26, 11, 40);
	flights[1].Flight::Flight(3090, "Tomsk", "Moscow", &departureTime[1], &arriveTime[1]);

	departureTime[2].Time::Time(2021, 7, 1, 14, 50);
	arriveTime[2].Time::Time(2021, 7, 1, 17, 55);
	flights[2].Flight::Flight(3060, "Moscow", "Stambul", &departureTime[2], &arriveTime[2]);

	departureTime[3].Time::Time(2021, 7, 9, 8, 15);
	arriveTime[3].Time::Time(2021, 7, 9, 9, 5);
	flights[3].Flight::Flight(3080, "Krasnodar", "Sochi", &departureTime[3], &arriveTime[3]);

	departureTime[4].Time::Time(2021, 5, 18, 6, 30);
	arriveTime[4].Time::Time(2021, 5, 18, 8, 20);
	flights[4].Flight::Flight(2060, "Berlin", "London", &departureTime[4], &arriveTime[4]);

	for (int i = 0; i < countFlights; ++i)
	{
		DisplayFlight::ShowFlight(&flights[i]);
	}
}

void FlightWithTimeMain()
{
	Flight flights;
	flights.DemoFlightWithTime();
}