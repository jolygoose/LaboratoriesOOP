#pragma once

#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>

#include "Time.h"

class Flight
{
private:
	int _numberFlight;
	string _departurePoint;
	string _arrivePoint;
	Time _departureTime;
	Time _arriveTime;

public:
	Flight();
	//TODO: если это номер рейста то может лучше flightNumber?
	Flight(int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	void SetFlight(int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	int GetFlightTimeMinutes();

	void ShowFlight();

	void DemoFlightWithTime();
};

void FlightWithTimeMain();

#endif // !_FLIGHT_H_