#pragma once
#include "Base.h"

class Submarines :public Ship
{
private:
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



	void GetInfo()
	{

		ofstream fout("InfoSubmarines.txt", ios::app);
		fout << "Submarine (id: " << id << ")" << endl;

		cout << "Enter the length:" << endl;
		cin >> length;
		fout << "length = " << length << endl;


	}

};

//int Submarines::Count = 0;
