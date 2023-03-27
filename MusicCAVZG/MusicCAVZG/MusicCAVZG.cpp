// MusicCAVZG.cpp : This file contains the 'main' function. Program execution begins and ends there.
// x64 MusicCAVZG C++ APP

#include <iostream>
#include <string>
#include "ControllerSongs.h"

// Global Class
ControllerSongs* ctrlSongs = new ControllerSongs;

int main()
{
    std::cout << "Programa main \n";
    ctrlSongs->createSong(1, "PumpedUpKicks", "FosterThePeople", "4:15", "Indie", "https://youtu.be/SDTZ7iX4vTQ", false);
    ctrlSongs->printSong();
    system("pause");
}


