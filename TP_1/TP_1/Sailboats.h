#pragma once
#include "Base.h"


void GetInfor(string StringParam, int& Param);

class Sailboats :public Ship
{
protected:
	//string Base = "Sailboat";

	string TypeOfSailboat;			// тип парусника
	string title;				// название
	bool PeacefulOrMilitary;	// мирный или военный
	int BodyLength;			// длина корпуса

public:
	Sailboats()
	{
		cout << "Sailboats();" << endl;

	}

	int GetCountSa();
	void SetCountSa();
	string GetTypeOfSailboat();
	void SetTypeOfSailboat();
	string GetTitle();
	void SetTitle();
	int GetPeacefulOrMilitary();
	void SetPeacefulOrMilitary();
	int GetBodyLength();
	void SetBodyLength();
	int GetSpeedSa();
	void SetSpeedSa();
	int GetCrewSa();
	void SetCrewSa();


	void GetInfo();

	friend class Keeper;
};

