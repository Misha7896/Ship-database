#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdexcept>

using namespace std;

class ShipBase
{
protected:
	int ZEROnum = 0;			// �������� ��� �������
	string ZEROstr = "\\";		// �������� ��� �������

	int size = 10000;			// ����� �������
	int lenghArray = 100;		// ����� �������
	char** array;				// ����� ��� ���������� � ����������� ��������� �����

	int count = 0;

	int crew;		// ������
	int speed;		// �������� �� ����

public:
	ShipBase();
	~ShipBase();
	
	virtual void Ffff() = 0;
};

