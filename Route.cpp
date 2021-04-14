#include "Route.h"

void SetNumber(Route& route, int number)
{
	route.Number = number;
}

void SetPeriodicity(Route& route, int periodicity)
{
	route.Periodicity = periodicity;
	if (periodicity > 360)
	{
		throw exception("Periodicity cannot be more than 360 and smaller than 0");
	}
}

void SetDuration(Route& route, int averageDuration)
{
	route.AverageDuration = averageDuration;
}

void SetCountStations(Route& route, int countStations)
{
	route.CountStations = countStations;
	if (countStations > 10)
	{
		throw exception("Periodicity cannot be more than 10 and smaller than 0");
	}
}


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


int FindRouteTo(Route* route, int stationsCount, string nameStop)
{
	int findResult = -1;
	for (int i = 0; i < stationsCount; ++i)
	{
		for (int j = 0; j <= route[i].CountStations; ++j)
		{
			if (route[i].NameStation[j] == nameStop)
			{
				findResult = i;
				return findResult;
			}
		}
	}
	return findResult;
}


void DemoRoute()
{
	const int maxRoutes = 5;
	Route routes[maxRoutes];
	int countRoutes;
	while (true)
	{
		cout << "Enter a count of routes: ";
		countRoutes = GetCorrectUnsignedIntegerValue();
		if (countRoutes <= 5)
		{
			break;
		}
		cerr << endl << "Error: The count of routes should be in range 1-5" << endl;
	}

	for (int i = 0; i < countRoutes; ++i)
	{
		cout << endl << "\tInformation about [" << i + 1 << "] route:" << endl;
		ReadRouteFromConsole(routes[i]);
	}

	cout << endl;
	for (int i = 0; i < countRoutes; ++i)
	{
		WriteRouteFromConsole(routes[i]);
	}

	cout << endl << "Enter the name of station to search: ";
	string nameStop;
	getline(cin, nameStop);
	int resultSearch = FindRouteTo(routes, countRoutes, nameStop);
	if (resultSearch != -1)
	{
		cout << endl << "Result of search: ";
		WriteRouteFromConsole(routes[resultSearch]);
	}
	else
	{
		cout << endl << "There is no that station";
	}
	cout << endl;
}