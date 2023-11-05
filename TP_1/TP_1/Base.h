#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Ship
{
private:
	int crew;		// экипаж
	float speed;	// скорость на воде

public:
	friend void MainFoo(string Base, string parameter, float& Param);

};

