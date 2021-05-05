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

	/// @brief Функция-геттер номера рейса
	/// 
	/// @return Результат работы геттера
	int GetNumberFlight();

	/// @brief Функция-геттер места отправления рейса
	/// 
	/// @return Результат работы геттера
	string GetDeparturePoint();

	/// @brief Функция-геттер места назначения рейса
	/// 
	/// @return Результат работы геттера
	string GetArrivePoint();

	/// @brief Функция-геттер времени отправления рейса
	/// 
	/// @return Результат работы геттера
	Time GetDepartureTime();

	/// @brief Функция-геттер времени прибытия рейса
	/// 
	/// @return Результат работы геттера
	Time GetArriveTime();

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

	/// @brief Функция работы с классом рейс
	void DemoFlightWithTime();
};

/// @brief Точка входа в блок работы с классом рейс
void FlightWithTimeMain();

#endif // !_FLIGHT_H_