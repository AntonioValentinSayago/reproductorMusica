#ifndef __ControllerSongs
#define __ControllerSongs

#include "Songs.h"
#include <iostream>

class ControllerSongs
{
private:
	Songs* song;
public:

	ControllerSongs();

	~ControllerSongs();

	void createSong(int IDMusica, std::string SNombre, std::string SArtista,
		std::string SDuracion, std::string SGenero, std::string SRutaMusica, bool SFlag);

	void printSong();

};

#endif
