// MusicCAVZG.cpp : This file contains the 'main' function. Program execution begins and ends there.
// x64 MusicCAVZG C++ APP

#include <iostream>
#include <string>
#include "ControllerSongs.h"

// Global Class
ControllerSongs* ctrlSongs = new ControllerSongs;


int main()
{
	std::cout << "Reproductor CAVZG\n";
	ctrlSongs->createSong(1, "PalmTrees", "BaxterDury", "3:50", "Indie", "BaxterDury_PalmTrees.mp3", false);
	ctrlSongs->printSong();
	ctrlSongs->startSong();
	system("pause");
}

