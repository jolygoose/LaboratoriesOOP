#pragma once

#ifndef _ROUTE_H_
#define _ROUTE_H_

#include <iostream>
#include <string>

#include "Common.h"

using namespace std;

/// @brief Структура маршрута
struct Route
{
	// Номер маршрута
	int Number;
	// Длительность маршрута
	int	AverageDuration;
	// Частота маршрута
	int	Periodicity;
	// Список остановок
	string NameStation[10];
	// Количество остановок
	int CountStations;
};

/// @brief Функция-сеттер номера маршрута
/// 
/// @param route - маршрут
/// @param number - номер
void SetNumber(Route& route, int number);

/// @brief Функция-сеттер частоты маршрута
/// 
/// @param route - маршрут
/// @param periodicity - частота
void SetPeriodicity(Route& route, int periodicity);

/// @brief Функция-сеттер продолжительности маршрута
/// 
/// @param route - маршрут
/// @param averageDuration - продолжительность
void SetDuration(Route& route, int averageDuration);

/// @brief Функция-сеттер количества остановок
/// 
/// @param route - маршрут
/// @param countStations - количество остановок
void SetCountStations(Route& route, int countStations);

/// @brief Функция поиска маршрута, содержащего определённую остановку
/// 
/// @param route - маршрут
/// @param stationsCount - количество остановок
/// @param nameStation - название остановки
/// 
/// @retval -1 - маршрут не найден
/// 
/// @return Результат поиска
int FindRoute(Route* route, int stationsCount, string nameStation);

/// @brief Функция работы с маршрутами
void DemoRoute();

#endif // !_ROUTE_H_