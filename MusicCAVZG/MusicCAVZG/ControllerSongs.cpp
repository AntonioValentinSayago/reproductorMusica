#include "ControllerSongs.h"

ControllerSongs::ControllerSongs() {
	song = new Songs;
	n = 0;
	t1 = 0;
	t2 = 0;
	previous_pause_time = 0;
	errorString = {""};
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


void ControllerSongs::playSong() {
	t1 = time(0);
	mciGetErrorStringA(
		mciSendString(L"play mp3", NULL, 0, NULL),
		errorString.data(),
		MAXERRORLENGTH);
	std::printf("%s\n", errorString.data());
	std::cout << "Audio file playing...\n\n";
}

void ControllerSongs::pauseSong() {
	mciSendString(L"pause mp3", NULL, 0, NULL);
	t2 = time(0);
	std::cout << "Audio file paused after " << t2 - t1 + previous_pause_time << " seconds.\n\n";
	previous_pause_time += t2 - t1;
}

void ControllerSongs::closeSong() {
	mciSendString(L"close mp3", NULL, 0, NULL);
}

void ControllerSongs::openFileSong() {
	std::string cadena;
	cadena.append("open \"" + song->getSRutaMusica()).append("\" type mpegvideo alias mp3 ");
	std::wstring stemp = std::wstring(cadena.begin(), cadena.end());
	LPCWSTR sw = stemp.c_str();

	mciGetErrorStringA(
		mciSendString(sw, NULL, 0, NULL),
		errorString.data(),
		MAXERRORLENGTH);
	std::printf("%s\n", errorString.data());
}

void ControllerSongs::startSong() {
	//open the audio file
	openFileSong();

	while (true)
	{

		std::cout << "Press 1 to play the file and press 2 to exit the file. \n";
		std::cin >> n;
		if (n == 1)
		{
			//play the audio file
			playSong();
		}
		else if (n == 2)
		{
			//close the file and get out of the loop
			closeSong();
			break;
		}

		std::cout << "Press 0 to pause the file and press 2 to exit the file. \n";
		std::cin >> n;
		if (n == 0)
		{
			//pause the audio file
			pauseSong();
		}
		else if (n == 2)
		{
			//close the audio file
			closeSong();
			break;
		}
	}
}
