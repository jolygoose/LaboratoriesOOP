#pragma once

#ifndef _IOFLIGHT_H_
#define _IOFLIGHT_H_

#include "Flight.h"

static class DisplayFlight
{
public:
	/// @brief Функция вывода информации о рейсе на экран
	/// 
	/// @param flight - рейс
	static void ShowFlight(Flight* flight);
};

#endif //!_IOFLIGHT_H_