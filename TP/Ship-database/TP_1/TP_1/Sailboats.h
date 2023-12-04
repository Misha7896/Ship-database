#pragma once
#include "ShipBase.h"

//void GetInfor(string StringParam, int& Param, string& Par);
//void ReadingValues(char str[], int& Param, string Par);

class Sailboats :public ShipBase
{
protected:
	string TypeOfSailboat;	// ��� ���������	
	string title;			// ��������
	bool PeacefulOrMilitary;// ������ ��� �������
	int BodyLength;			// ����� �������

public:
	Sailboats();
	Sailboats(string TypeOfSailboat, string title, bool PeacefulOrMilitary, int BodyLength, int speed, int crew);
	~Sailboats();

	Sailboats& operator=(const Sailboats& other);

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


	void GetAddSa();
	void ToChangeSa(Sailboats* Sa, bool del);

	friend class Keeper;
};