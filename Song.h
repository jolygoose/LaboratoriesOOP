#pragma once

#ifndef _SONG_H_
#define _SONG_H_

#include <exception>
#include <iostream>
#include <string>

using namespace std;

/// @brief Перечисление музыкальных жанров
//TODO: вынести в отдельный файл
enum class Genre
{
	PopRock,
	FolkRock,
	HardRock,
	PunkRock,
	ClassicRock
};

/// @brief Класс песни
class Song
{
private:
	// Название
	string _title;
	// Длительность
	double _duration;
	// Жанр
	Genre _genre;

public:
	/// @brief Функция-сеттер названия песни
	/// 
	/// @param title - название
	void SetTitle(string title);

	/// @brief Функция-сеттер длительности песни
	/// 
	/// @param duration - длительность
	void SetDuration(double duration);

	/// @brief Функция-сеттер жанра песни
	/// 
	/// @param genre - жанр
	void SetGenre(Genre genre);

	/// @brief Функция-геттер названия песни
	string GetSongTitle();

	/// @brief Функция-геттер жанра песни
	Genre GetGenreMusic();

	/// @brief Пустой конструктор класса песня
	Song();

	/// @brief Конструктор класса песня
	///
	/// @param title - название
	/// @param duration - длительность
	/// @param genre - жанр
	Song(string title, double duration, Genre genre);
};

#endif // !_SONG_H_