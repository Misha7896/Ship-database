#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Ship
{
private:
	int crew;		// ������
	float speed;	// �������� �� ����

public:
	friend void MainFoo(string Base, string parameter, float& Param);

};

