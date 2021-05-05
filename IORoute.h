#pragma once

#ifndef _IOROUTE_H_
#define _IOROUTE_H_

#include "Route.h"

/// @brief Функция считывания информации о маршруте с консоли
/// 
/// @param route - маршрут
void ReadRouteFromConsole(Route& route);

/// @brief Функция вывода информации о маршруте на экран
/// 
/// @param route - маршрут
void WriteRouteFromConsole(Route& route);

#endif //!_IOROUTE_H_