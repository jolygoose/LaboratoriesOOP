#pragma once

#ifndef _ALBUM_H_
#define _ALBUM_H_

#include "Song.h"

class Album
{
private:
	string _title;
	int _year;
	Song* _album;

public:
	void SetTitle(string title);

	void SetYear(int year);

	void SetAlbum(Song* album);

	string GetAlbumTitle();

	Song* GetAlbumSong();

	Album();

	Album(string title, int year, Song* album);
};

#endif // !_ALBUM_H_