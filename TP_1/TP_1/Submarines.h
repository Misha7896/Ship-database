#pragma once
#include "Ship.h"

class Submarines :public Ship
{
private:
	int id;
public:
	//static int Ggg;
	float length;						// �����
	float width;						// ������
	//int crew;							// ������
	float TimeUnderWater;				// ����� ��� �����
	//float MaximumSpeedOnTheWater;		// ������������ �������� �� ����
	float MaximumUnderwaterSpeed;		// ������������ ��������� ��������
	int armament;						// ��. ����������

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

