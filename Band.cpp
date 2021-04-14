#include "Band.h"
#include "Album.h"

void Band::SetTitle(string title)
{
	this->_title = title;
}

void Band::SetHistory(string history)
{
	this->_history = history;
}

void Band::SetAlbum(Album* album)
{
	this->_album = album;
}


Song* Band::GetAllSongs(int& allSongsCount)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_album[i].GetAlbumSong()[j].GetSongTitle() != "")
			{
				allSongsCount++;
			}
		}
	}
	Song* song = new Song[allSongsCount];
	int counter = 0;
	while (counter < allSongsCount)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				song[counter].SetTitle(this->_album[i].
					GetAlbumSong()[j].GetSongTitle());
				counter++;
			}
		}
	}
	return song;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_album[i].GetAlbumSong()[j].GetGenreMusic() == findingGenre)
			{
				allSongsCount++;
			}
		}
	}
	Song* song = new Song[allSongsCount];
	int counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (this->_album[i].GetAlbumSong()[j].GetGenreMusic() == findingGenre)
			{
				song[counter].SetTitle(this->_album[i].GetAlbumSong()[j].GetSongTitle());
				counter++;
			}
		}
	}
	return song;
}


Band::Band()
{

}

Band::Band(string title, string history, Album* album)
{
	this->SetTitle(title);
	this->SetHistory(history);
	this->SetAlbum(album);
}


Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (this->_album[i].GetAlbumSong()[j].GetSongTitle() == songTitle)
			{
				return &this->_album[i].GetAlbumSong()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(string songTitle)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (this->_album[i].GetAlbumSong()[j].GetSongTitle() == songTitle)
			{
				return &this->_album[i];
			}
		}
	}
	return nullptr;
}


void Band::DemoBand()
{
	const int countSongs = 4;
	Song* firstSongs = new Song[countSongs];
	Song* secondSongs = new Song[countSongs];
	Song* thirdSongs = new Song[countSongs];

	firstSongs[0].Song::Song("First song", 10, Genre::ClassicRock);
	firstSongs[1].Song::Song("Second song", 20, Genre::ClassicRock);
	firstSongs[2].Song::Song("Folk test song", 30, Genre::FolkRock);
	firstSongs[3].Song::Song("POOP song", 40, Genre::PopRock);

	secondSongs[0].Song::Song("classic. song", 50, Genre::ClassicRock);
	secondSongs[1].Song::Song("OOP song", 60, Genre::PopRock);
	secondSongs[2].Song::Song("OP song", 70, Genre::PopRock);
	secondSongs[3].Song::Song("sOng", 80, Genre::PunkRock);

	thirdSongs[0].Song::Song("2008'th song", 90, Genre::PunkRock);
	thirdSongs[1].Song::Song("ROCK song", 100, Genre::HardRock);
	thirdSongs[2].Song::Song("Hard song", 110, Genre::HardRock);
	thirdSongs[3].Song::Song("Best song", 120, Genre::ClassicRock);

	const int countAlbums = 3;
	Album albums[countAlbums];
	albums[0].Album::Album("First test album", 1999, firstSongs);
	albums[1].Album::Album("Experimental album", 2003, secondSongs);
	albums[2].Album::Album("The best album", 2007, thirdSongs);

	this->Band::Band("TBB (The best band)", "History is so big...", albums);
	cout << "Band: " << this->_title << " | History: " << this->_history;
	for (int i = 0; i < countAlbums; ++i)
	{
		cout << endl << endl << i + 1 << " Album: " << this->_album[i].GetAlbumTitle();
		for (int j = 0; j < countSongs; ++j)
		{
			cout << endl << "\t" << j + 1 << ") "
				<< this->_album[i].GetAlbumSong()[j].GetSongTitle();
		}
	}

	string songToFind = "Best song";
	Song* findSong = FindSong(songToFind);
	cout << endl << endl << "Search '" << songToFind << "' song: ";
	if (findSong)
	{
		cout << findSong->GetSongTitle() << " is found!";
	}
	else
	{
		cout << "This song has not been found.";
	}
	string songToFindAlbum= "OOP song";
	Album* findAlbum = FindAlbum(songToFindAlbum);
	cout << endl << "Search for an album of the song '" << songToFindAlbum << "': ";
	if (findAlbum)
	{
		cout << "The song '" << songToFindAlbum << "' placed into '"
			<< findAlbum->GetAlbumTitle() << "' album.";
	}
	else
	{
		cout << "This song is not on any album.";
	}

	int allSongsCount = 0;
	Song* songs = GetAllSongs(allSongsCount);
	cout << endl << endl << "List of songs: ";
	for (int i = 0; i < allSongsCount; ++i)
	{
		cout << endl << "\t" << i + 1 << ". " << songs[i].GetSongTitle();
	}
	allSongsCount = 0;
	Song* classicRockSongs = GetAllGenreSongs(Genre::ClassicRock, allSongsCount);
	cout << endl << endl << "List of classic rock songs:";
	for (int i = 0; i < allSongsCount; ++i)
	{
		cout << endl << "\t" << i + 1 << ". " << classicRockSongs[i].GetSongTitle();
	}
	cout << endl << endl;
}

void BandMain()
{
	Band band;
	band.DemoBand();
}