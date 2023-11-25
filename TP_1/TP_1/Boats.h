#pragma once
#include "ShipBase.h"

//void GetInfor(string StringParam, int& Param, string& Par);
//void ReadingValues(char str[], int& Param, string Par);

class Boats :public ShipBase
{
protected:
	//string Base = "Boat";

	string purpose;				// ����������
	string HousingMaterial;		// �������� �������
	int DrivingQualities;		// ������� �������� �� 100 ������� �������
	//int speed;		// ��������
	//int NumberOfPeople;		// ���������� �����, ������� ����� ��������� �� �����

public:
	Boats()
	{
		cout << "Boats();" << endl;

	}

	int GetCountBo();
	void SetCountBo();
	string GetPurpose();
	void SetPurpose();
	string GetHousingMaterial();
	void SetHousingMaterial();
	int GetDrivingQualities();
	void SetDrivingQualities();
	int GetSpeedBo();
	void SetSpeedBo();
	int GetCrewBo();
	void SetCrewBo();



	void GetAddBo();
	void ToChangeBo(Boats* Bo, bool del);

	friend class Keeper;
};

