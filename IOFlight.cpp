#include "IOFlight.h"
#include "IOTime.h"

using namespace std;

void DisplayFlight::ShowFlight(Flight* flight)
{
	int flightTime = flight->GetFlightTimeMinutes();
	cout << "Flight "
		<< flight->GetNumberFlight() << " | "
		<< flight->GetDeparturePoint() << "-"
		<< flight->GetArrivePoint() << ":";
	cout << "\tDeparture: ";
	Time departureTime = flight->GetDepartureTime();
	DisplayTime::ShowTime(departureTime);
	cout << "\tArrive: ";
	Time arriveTime = flight->GetDepartureTime();
	DisplayTime::ShowTime(arriveTime);
	cout << endl << "Flight time: "
		<< flightTime / 60 << " hours "
		<< flightTime % 60 << " minutes" << endl << endl;
}
