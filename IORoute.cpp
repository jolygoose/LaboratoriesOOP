#include "IORoute.h"

void ReadRouteFromConsole(Route& route)
{
	cout << "Enter a route number: ";
	SetNumber(route, GetCorrectIntegerValue());
	cout << "Enter a route periodicity (1 - 360): ";
	SetPeriodicity(route, GetCorrectUnsignedIntegerValue());
	cout << "Enter a average route duration: ";
	SetDuration(route, GetCorrectUnsignedIntegerValue());
	cout << "Enter a count stations (1 - 10): ";
	SetCountStations(route, GetCorrectUnsignedIntegerValue());
	for (int i = 0; i < route.CountStations; ++i)
	{
		cout << "\tEnter a name of [" << i + 1 << "] station: ";
		getline(cin, route.NameStation[i]);
	}
}


void WriteRouteFromConsole(Route& route)
{
	for (int i = 0; i < route.CountStations; ++i)
	{
		if (i != route.CountStations - 1)
		{
			cout << route.NameStation[i] << " - ";
		}
		else
		{
			cout << route.NameStation[i] << " | [";
		}
	}
	cout << route.Number << "] Periodicity: ";
	cout << route.Periodicity << " minutes. Average route duration: ";
	cout << route.AverageDuration << " minutes." << endl;
}