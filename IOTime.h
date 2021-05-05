#pragma once

#ifndef _IOTIME_H_
#define _IOTIME_H_

#include "Time.h"

static class DisplayTime
{
public:
	/// @brief Функция вывода на экран информации о времени
	/// 
	/// @param time - время
	static void ShowTime(Time& time);
};

#endif //!_IOTIME_H_