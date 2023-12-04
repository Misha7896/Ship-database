#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdexcept>

using namespace std;

class ShipBase
{
protected:
	int ZEROnum = 0;			// Занулене для функции
	string ZEROstr = "\\";		// Занулене для функции

	int size = 10000;			// Длина массива
	int lenghArray = 100;		// Длина массива
	char** array;				// Масив для считывания и запоминания тестового файла

	int count = 0;

	int crew;		// экипаж
	int speed;		// скорость на воде

public:
	ShipBase();
	~ShipBase();
	
	virtual void Ffff() = 0;
};

