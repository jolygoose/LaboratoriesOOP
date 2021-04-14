#include "Song.h"

void Song::SetTitle(string title)
{
	this->_title = title;
}

void Song::SetDuration(double duration)
{
	this->_duration = duration;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}


string Song::GetSongTitle()
{
	return this->_title;
}

Genre Song::GetGenreMusic()
{
	return this->_genre;
}


Song::Song()
{

}

Song::Song(string title, double duration, Genre genre)
{
	this->SetTitle(title);
	this->SetDuration(duration);
	this->SetGenre(genre);
}