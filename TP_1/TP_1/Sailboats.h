#pragma once
#include "Base.h"

class Sailboats :public Ship
{
private:
	void TypeOfSailboat();			// ��� ���������
	string title;				// ��������
	bool PeacefulOrMilitary;	// ������ ��� �������
	float BodyLength;			// ����� �������
	//MovementSpeed;			// �������� �����������
	//int crew;							// ������

public:
	Sailboats()
	{
		cout << "Sailboats();" << endl;



	}


};

