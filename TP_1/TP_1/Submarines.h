#pragma once
#include "Base.h"

class Submarines :public Ship
{
private:
	int id;
	float length;						// длина
	float width;						// ширина
	//int crew;							// экипаж
	float TimeUnderWater;				// время под водой
	//float MaximumSpeedOnTheWater;		// максимальная скорость на воде
	float MaximumUnderwaterSpeed;		// максимальная подводная скорость
	int armament;						// ед. вооружения

public:
	//static int Count;
	Submarines()
	{
		cout << "\nSubmarines();" << endl;
		//Count++;
		//id = Count + 1000;
	}

	float GetLength()
	{
		return length;
	}

	void SetLength()
	{
		cout << "length" << length << endl;
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

//int Submarines::Count = 0;
