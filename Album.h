#pragma once

#ifndef _ALBUM_H_
#define _ALBUM_H_

#include "Song.h"

/// @brief Класс альбома песен
class Album
{
private:
	// Название
	string _title;
	// Год выпуска
	int _year;
	// Список песен
	Song* _album;

public:
	/// @brief Функция-сеттер для названия альбома
	/// 
	/// @param title - название
	void SetTitle(string title);

	/// @brief Функция-сеттер для года выпуска
	///
	/// @param year - год выпуска
	void SetYear(int year);

	/// @brief Функция-сеттер для списка песен
	///
	/// @param album - список песен
	void SetAlbum(Song* album);

	/// @brief Функция-геттер названия альбома
	string GetAlbumTitle();

	/// @brief Функция-геттер списка песен
	Song* GetAlbumSong();

	/// @brief Пустой конструктор класса альбом
	Album();

	/// @brief Конструктор класса альбом
	/// 
	/// @param title - название альбома
	/// @param year - год выпуска
	/// @param album - список песен
	Album(string title, int year, Song* album);
};

#endif // !_ALBUM_H_