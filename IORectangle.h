#pragma once

#ifndef _IORECTANGLE_H_
#define _IORECTANGLE_H_

#include "Rectangle.h"

static class DisplayRectangle
{
public:
	/// @brief Функция вывода информации о прямоугольнике на экран
	/// 
	/// @param rectangle - прямоугольник
	static void ShowRectangle(Rectangle* rectangle);
};

#endif //!_IORECTANGLE_H_