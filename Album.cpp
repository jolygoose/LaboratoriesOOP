#include "Album.h"

void Album::SetTitle(string title)
{
	this->_title = title;
}

void Album::SetYear(int year)
{
	this->_year = year;
}

void Album::SetSongs(Song* songs)
{
	this->_songs = songs;
}


string Album::GetAlbumTitle()
{
	return this->_title;
}

Song* Album::GetAlbumSong()
{
	return this->_songs;
}


Album::Album()
{

}

Album::Album(string title, int year, Song* songs)
{
	this->SetTitle(title);
	this->SetYear(year);
	this->SetSongs(songs);
}