#pragma once
#include "Base.h"


void GetInfor(string StringParam, int& Param);
void ReadingValues(char str[], int& Param);

class Submarines :public Ship
{
protected:
	//string Base = "Submarine";

	int length;						// �����
	int width;						// ������
	int TimeUnderWater;				// ����� ��� �����
	//int MaxSpeedOnTheWater;		// ������������ �������� �� ����
	int MaxUnderwaterSpeed;		// ������������ ��������� ��������
	int armament;						// ��. ����������

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
