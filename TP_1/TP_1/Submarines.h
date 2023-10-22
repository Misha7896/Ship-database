#pragma once
#include "Ship.h"
//#include <string>
//#include <iostream>

class Submarines :public Ship
{
public:
	float length;						// длина
	float width;						// ширина
	//int crew;							// экипаж
	float TimeUnderWater;				// время под водой
	//float MaximumSpeedOnTheWater;		// максимальная скорость на воде
	float MaximumUnderwaterSpeed;		// максимальная подводная скорость
	int armament;						// ед. вооружения


};

