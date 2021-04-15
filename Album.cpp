#include "Album.h"

void Album::SetTitle(string title)
{
	this->_title = title;
}

void Album::SetYear(int year)
{
	this->_year = year;
}
//TODO: как это у альбома поле альбом? может songs?
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

//TODO: деструктора нет, утечка памяти из-за массива песен, проверь на то же самое другие классы,
//если есть поле-указатель с массивом, то в деструкторе на него нужен delete
//да и в принципе если создал динамический массив, не забуть освободить память
Album::Album()
{

}

Album::Album(string title, int year, Song* album)
{
	this->SetTitle(title);
	this->SetYear(year);
	this->SetAlbum(album);
}