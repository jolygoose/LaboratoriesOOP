#pragma once

#ifndef _BAND_H_
#define _BAND_H_

#include "Album.h"

/// @brief Класс музыкальной группы
class Band
{
private:
	// Название
	string _title;
	// История
	string _history;
	// Список альбомов
	Album* _albums;

public:
	/// @brief Функция-сеттер названия группы
	/// 
	/// @param title - название группы
	void SetTitle(string title);

	/// @brief Функция-сеттер истории группы
	/// 
	/// @param history - история группы
	void SetHistory(string history);

	/// @brief Функция-сеттер списка альбомов
	/// 
	/// @param album - список альбомов
	void SetAlbum(Album* album);

	/// @brief Функция получения списка всех песен
	/// 
	/// @param songsCount - количество песен
	Song* GetAllSongs(int& songsCount, int countSongs, int countAlbums);

	/// @brief Функция получения списка песен определённого жанра
	/// 
	/// @param findingGenre - искомый жанр
	/// @param songsCount - количество песен
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount,
		int countSongs, int countAlbums);

	/// @brief Пустой конструктор класса музыкальная группа
	Band();

	/// @brief Конструктор класса музыкальная группа
	/// 
	/// @param title - название
	/// @param history - история
	/// @param album - список альбомов
	Band(string title, string history, Album* album);

	/// @brief Функция поиска песни по названию
	/// 
	/// @param songTitle - искомая песня
	/// 
	/// @return Результат поиска песни
	Song* FindSong(string songTitle, int countSongs, int countAlbums);

	/// @brief Функция поиска альбома, в котором содержится
	/// определённая песня
	/// 
	/// @param songTitle - искомая песня
	/// 
	/// @retval nullptr - песня не найдена
	/// 
	/// @return Результат поиска песни
	Album* FindAlbum(string songTitle, int countSongs, int countAlbums);

	/// @brief Функция работы с классом музыкальная группа
	void DemoBand();
};

/// @brief Точка входа в блок работы с классом музыкальная группа
void BandMain();

#endif // !_BAND_H_