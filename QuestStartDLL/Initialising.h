#ifndef INITIALISING_H
#define INITIALISING_H

#include <Windows.h>



DWORD WINAPI Initialising(LPVOID lpParam)
{
	transformItemIDtoHashAddress = ArrayOfBytesScan("SkyrimSE.exe", "40 57 48 83 EC 30 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 40 48 89 74 24 58 8B F9");
	itemSpawnAddress = ArrayOfBytesScan("SkyrimSE.exe", "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 4C 8B 51");

	return NULL;
}

#endif