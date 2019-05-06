#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <random>

std::string rickUrl = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

int minuteMaid(int timestamp) {
	if (timestamp == 0) { 

		int initNum = std::rand() % 4 + 1;
		int toReturn = 0;
		for (int x = 0; x < initNum; x++) {
			toReturn += 60000;
		}

		return toReturn; 
	}
	else if (timestamp == 1) return std::rand() % 4 + 1;
	else if (timestamp == 2) return std::rand() % 8 + 1;
	else return 0;
 }

void hide() {
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth, 0);
}

int main()
{
	hide();
	system("start chrome.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ");

	do {
		int min = minuteMaid(0);
		int sec0 = minuteMaid(1) * 1000;
		int sec1 = minuteMaid(2) * 1000;

		int delayTime = min + sec0 + sec1;

		Sleep(delayTime);

		system("start chrome.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ");
	} while (true);
	return 0;
}
