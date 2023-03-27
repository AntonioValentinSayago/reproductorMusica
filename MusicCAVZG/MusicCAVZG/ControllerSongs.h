#ifndef __ControllerSongs
#define __ControllerSongs

#include "Songs.h"
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <array>
#pragma comment(lib, "Winmm.lib")

class ControllerSongs
{
private:
	Songs* song;
	int n;
	time_t t1, t2, previous_pause_time;
	std::array<char, MAXERRORLENGTH> errorString;

	void playSong();

	void pauseSong();

	void closeSong();

	void openFileSong();

public:

	ControllerSongs();
	
	~ControllerSongs();

	void createSong(int IDMusica, std::string SNombre, std::string SArtista,
		std::string SDuracion, std::string SGenero, std::string SRutaMusica, bool SFlag);

	void printSong();

	void startSong();

};

#endif
