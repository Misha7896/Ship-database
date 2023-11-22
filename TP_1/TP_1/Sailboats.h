#pragma once
#include "ShipBase.h"


void GetInfor(string StringParam, int& Param);

class Sailboats :public ShipBase
{
protected:
	//string Base = "Sailboat";

	string TypeOfSailboat;			// ��� ���������
	string title;				// ��������
	bool PeacefulOrMilitary;	// ������ ��� �������
	int BodyLength;			// ����� �������

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

