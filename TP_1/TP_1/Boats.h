#pragma once
#include "ShipBase.h"


void GetInfor(string StringParam, int& Param);

class Boats :public ShipBase
{
protected:
	//string Base = "Boat";

	string purpose;				// назначение
	string HousingMaterial;		// материал корпуса
	int DrivingQualities;		// ходовые качества по 100 бальной системе
	//int speed;		// скорость
	//int NumberOfPeople;		// количество людей, которые могут находится на борту

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



	void GetInfo();


	friend class Keeper;
};

