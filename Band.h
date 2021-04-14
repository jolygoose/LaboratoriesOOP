#pragma once

#ifndef _BAND_H_
#define _BAND_H_

#include "Album.h"

class Band
{
private:
	string _title;
	string _history;
	Album* _album;

public:
	void SetBand(string title, string history, Album* album);

	void SetTitle(string title);

	void SetHistory(string history);

	void SetAlbum(Album* album);

	Song* GetAllSongs(int& songsCount);

	Song* GetAllGenreSongs(Genre findingGenre, int& songsCount);

	Band();

	Band(string title, string history, Album* album);

	Song* FindSong(string songTitle);

	Album* FindAlbum(string songTitle);

	void DemoBand();
};

void BandMain();

#endif // !_BAND_H_