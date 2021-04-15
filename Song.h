#pragma once

#ifndef _SONG_H_
#define _SONG_H_

#include <exception>
#include <iostream>
#include <string>

using namespace std;
//TODO: вынести в отдельный файл
enum class Genre
{
	PopRock,
	FolkRock,
	HardRock,
	PunkRock,
	ClassicRock
};

class Song
{
private:
	string _title = "";
	double _duration;
	Genre _genre;

public:
	void SetTitle(string title);

	void SetDuration(double duration);

	void SetGenre(Genre genre);

	string GetSongTitle();
	//TODO: зачем здесь перед типом enum, если он уже раньше объ€влен как enum
	enum Genre GetGenreMusic();

	Song();

	Song(string title, double duration, Genre genre);
};

#endif // !_SONG_H_