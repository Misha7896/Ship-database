#pragma once
#include "Ship.h"
//#include <string>
//#include <iostream>

class Submarines :public Ship
{
public:
	float length;						// �����
	float width;						// ������
	//int crew;							// ������
	float TimeUnderWater;				// ����� ��� �����
	//float MaximumSpeedOnTheWater;		// ������������ �������� �� ����
	float MaximumUnderwaterSpeed;		// ������������ ��������� ��������
	int armament;						// ��. ����������


};

