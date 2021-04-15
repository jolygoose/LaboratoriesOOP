#pragma once

#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>

#include "Time.h"

/// @brief Класс рейса
class Flight
{
private:
	// Номер рейса
	int _numberFlight;
	// Пункт отправления
	string _departurePoint;
	// Пункт назначения
	string _arrivePoint;
	// Время отправления
	Time _departureTime;
	// Время прибытия
	Time _arriveTime;

public:
	/// @brief Функция-сеттер информации о рейсе
	/// 
	/// @param nubmerFlight - номер рейса
	/// @param depatrurePoint - пункт отправления
	/// @param arrivePoint - пункт назначения
	/// @param departureTime - время отправления
	/// @param arriveTime - время прибытия
	void SetFlight(int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	/// @brief Функция расчёта времени полёта
	/// 
	/// @return Результат расчёта
	int GetFlightTimeMinutes();

	/// @brief Пустой конструктор класса рейс
	Flight();

	/// @brief Функция-конструктор класса рейс
	/// 
	/// @param nubmerFlight - номер рейса
	/// @param depatrurePoint - пункт отправления
	/// @param arrivePoint - пункт назначения
	/// @param departureTime - время отправления
	/// @param arriveTime - время прибытия
	Flight(int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	/// @brief Функция вывода информации о рейсе на экран
	void ShowFlight();

	/// @brief Функция работы с классом рейс
	void DemoFlightWithTime();
};

/// @brief Точка входа в блок работы с классом рейс
void FlightWithTimeMain();

#endif // !_FLIGHT_H_