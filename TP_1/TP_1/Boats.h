#pragma once
#include "Base.h"

class Boats :public Ship
{
private:
	string purpose;				// ����������
	string HousingMaterial;		// �������� �������
	int DrivingQualities;		// ������� �������� �� 100 ������� �������
	//speed;		// ��������
	//int NumberOfPeople;		// ���������� �����, ������� ����� ��������� �� �����

public:
	Boats()
	{
		cout << "Boats();" << endl;




	}



};

