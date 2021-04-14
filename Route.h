#pragma once

#ifndef _ROUTE_H_
#define _ROUTE_H_

#include <iostream>
#include <string>

#include "Common.h"

using namespace std;

struct Route
{
	int Number;
	int	AverageDuration;
	int	Periodicity;
	string NameStation[10];
	int CountStations;
};

void SetNumber(Route& route, int number);

void SetPeriodicity(Route& route, int periodicity);

void SetDuration(Route& route, int averageDuration);

void SetCountStations(Route& route, int countStations);

void ReadRouteFromConsole(Route& route);

void WriteRouteFromConsole(Route& route);

int FindRouteTo(Route* route, int stationsCount, string nameStop);

void DemoRoute();

#endif // !_ROUTE_H_