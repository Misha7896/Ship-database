#pragma once
#include "Base.h"
#include "Base.cpp"

class Submarines :public Ship
{
private:
	string Base = "Submarines";
	string ParamLength = "length";
	
	int id;
	float length;						// �����
	float width;						// ������
	//int crew;							// ������
	float TimeUnderWater;				// ����� ��� �����
	//float MaximumSpeedOnTheWater;		// ������������ �������� �� ����
	float MaximumUnderwaterSpeed;		// ������������ ��������� ��������
	int armament;						// ��. ����������

public:
	//static int Count;
	Submarines()
	{
		cout << "\nSubmarines();" << endl;
		//Count++;
		//id = Count + 1000;
	}

	float GetLength()
	{
		return length;
	}

	void SetLength()
	{
		cout << "length" << length << endl;
	}


	friend void MainFoo(string Base, string parameter, float& Param);

	friend void GetInfo(string Base, string parameter, float& Param, string ParamLength, float length);

	

};

//int Submarines::Count = 0;
