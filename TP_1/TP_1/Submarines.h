#pragma once
#include "ShipBase.h"



void GetInfor(string StringParam, int& Param, string& Par);
void ReadingValues(char str[], int& Param, string& Par);

class Submarines :public ShipBase
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


	void GetAddSu();
	void ToChangeSu(Submarines* Su, bool del);

	friend class Keeper;
};

//int Submarines::Count = 0;
