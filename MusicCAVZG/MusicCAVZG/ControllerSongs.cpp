#include "ControllerSongs.h"


ControllerSongs::ControllerSongs() {
	song = new Songs;
}

ControllerSongs::~ControllerSongs() {
	delete song;
}

void ControllerSongs::createSong(int IDMusica, std::string SNombre, std::string SArtista,
	std::string SDuracion, std::string SGenero, std::string SRutaMusica, bool SFlag) {
	song->setIdMusica(IDMusica);
	song->setSNombre(SNombre);
	song->setSArtista(SArtista);
	song->setSDuracion(SDuracion);
	song->setSGenero(SGenero);
	song->setSRutaMusica(SRutaMusica);
	song->setSFlag(SFlag);
}

void ControllerSongs::printSong() {
	std::cout << song->getIdMusica() << "\n";
	std::cout << song->getSNombre() << "\n";
	std::cout << song->getSArtista() << "\n";
	std::cout << song->getSDuracion() << "\n";
	std::cout << song->getSGenero() << "\n";
	std::cout << song->getSRutaMusica() << "\n";
	std::cout << song->getSFlag() << "\n";
}