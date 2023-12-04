#pragma once
#include "ShipBase.h"

void GetInfor(string StringParam, int& Param, string& Par);
void ReadingValues(char str[], int& Param, string& Par);

class Submarines :public ShipBase
{
protected:
	int length;				// длина
	int width;				// ширина
	int TimeUnderWater;		// время под водой
	int MaxUnderwaterSpeed;	// максимальная подводная скорость
	int armament;			// ед. вооружения

public:
	Submarines();
	Submarines(int length, int width, int TimeUnderWater, int speed, int MaxUnderwaterSpeed, int armament);
	~Submarines();

	Submarines& operator=(const Submarines& other);
	
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


	void GetAddSu();
	void ToChangeSu(Submarines* Su, bool del);

	void Ffff() override
	{
		cout << "Virtual" << endl;
	}

	friend class Keeper;
};