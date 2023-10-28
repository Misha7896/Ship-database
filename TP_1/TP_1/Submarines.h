#pragma once
#include "Ship.h"

class Submarines :public Ship
{
private:
	int id;
public:
	//static int Ggg;
	float length;						// длина
	float width;						// ширина
	//int crew;							// экипаж
	float TimeUnderWater;				// время под водой
	//float MaximumSpeedOnTheWater;		// максимальная скорость на воде
	float MaximumUnderwaterSpeed;		// максимальная подводная скорость
	int armament;						// ед. вооружения

	Submarines()
	{
		Ggg++;
		id = Ggg + 1000;
	}


	void GetInfo()
	{

		ofstream fout("InfoSubmarines.txt", ios::app);
		fout << "Submarine (id: " << id << ")" << endl;

		cout << "Enter the length:" << endl;
		cin >> length;
		fout << "length = " << length << endl;


	}

};

