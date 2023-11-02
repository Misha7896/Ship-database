#pragma once
#include "Base.h"

class Sailboats :public Ship
{
private:
	void TypeOfSailboat();			// тип парусника
	string title;				// название
	bool PeacefulOrMilitary;	// мирный или военный
	float BodyLength;			// длина корпуса
	//MovementSpeed;			// скорость перемещения
	//int crew;							// экипаж

public:
	Sailboats()
	{
		cout << "Sailboats();" << endl;



	}


};

