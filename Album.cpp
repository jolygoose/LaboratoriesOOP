#include "Album.h"

void Album::SetTitle(string title)
{
	this->_title = title;
}

void Album::SetYear(int year)
{
	this->_year = year;
}

void Album::SetAlbum(Song* album)
{
	this->_album = album;
}


string Album::GetAlbumTitle()
{
	return this->_title;
}

Song* Album::GetAlbumSong()
{
	return this->_album;
}


Album::Album()
{

}

Album::Album(string title, int year, Song* album)
{
	this->SetTitle(title);
	this->SetYear(year);
	this->SetAlbum(album);
}