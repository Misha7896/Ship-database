#pragma once
#include "Base.h"


void GetInfor(string StringParam, int& Param);
void ReadingValues(char str[], int& Param);

class Submarines :public Ship
{
protected:
	//string Base = "Submarine";

	int length;						// длина
	int width;						// ширина
	int TimeUnderWater;				// время под водой
	//int MaxSpeedOnTheWater;		// максимальная скорость на воде
	int MaxUnderwaterSpeed;		// максимальная подводная скорость
	int armament;						// ед. вооружения

public:
	Submarines()
	{
		cout << "\nSubmarines();" << endl;
	}
	
	int GetCountSu();
	void SetCountSu();
	int GetLength();
	void SetLength();
	int GetWidth();
	void SetWidth();
	int GetCrewSu();
	void SetCrewSu();
	int GetTimeUnderWater();
	void SetTimeUnderWater();
	int GetSpeedSu();
	void SetSpeedSu();
	int GetMaxUnderwaterSpeed();
	void SetMaxUnderwaterSpeed();
	int GetArmament();
	void SetArmament();


	void GetInfo();
	void ToChange();

	friend class Keeper;
};

//int Submarines::Count = 0;
