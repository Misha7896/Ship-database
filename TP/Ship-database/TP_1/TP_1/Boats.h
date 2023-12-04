#pragma once
#include "ShipBase.h"

//void GetInfor(string StringParam, int& Param, string& Par);
//void ReadingValues(char str[], int& Param, string Par);

class Boats :public ShipBase
{
protected:
	string purpose;				// назначение
	string HousingMaterial;		// материал корпуса
	int DrivingQualities;		// ходовые качества по 100 бальной системе

public:
	Boats();
	Boats(string purpose, string HousingMaterial, int DrivingQualities, int speed, int crew);
	~Boats();

	Boats& operator=(const Boats& other);

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