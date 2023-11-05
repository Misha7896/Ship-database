#pragma once
#include "Base.h"

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

	void GetInfo()
	{
		MainFoo(Base, ParamLength, length);

		ofstream fout("InfoSubmarines.txt", ios::app);
		fout << "Submarine (id: " << id << ")" << endl;

		cout << "Enter the length:" << endl;
		cin >> length;
		fout << "length = " << length << endl;



		fout.close();
	}

};

//int Submarines::Count = 0;
