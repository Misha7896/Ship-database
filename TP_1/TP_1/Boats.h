#pragma once
#include "Base.h"

class Boats :public Ship
{
private:
	string purpose;				// назначение
	string HousingMaterial;		// материал корпуса
	int DrivingQualities;		// ходовые качества по 100 бальной системе
	//speed;		// скорость
	//int NumberOfPeople;		// количество людей, которые могут находится на борту

public:
	Boats()
	{
		cout << "Boats();" << endl;




	}



};

