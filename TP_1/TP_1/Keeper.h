#pragma once
#include "Base.h"
#include "Submarines.h"
#include "Sailboats.h"
#include "Boats.h"

class Keeper :public Ship
{
public:
	void SaveSub(Submarines* Su);
	void SaveSail(Sailboats* Sa);
	void SaveBoats(Boats* Bo);

	
};

