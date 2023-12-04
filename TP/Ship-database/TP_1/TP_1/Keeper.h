#pragma once
#include "ShipBase.h"
#include "Submarines.h"
#include "Sailboats.h"
#include "Boats.h"

class Keeper :public ShipBase
{
public:
	void SaveSub(Submarines* Su);
	void SaveSail(Sailboats* Sa);
	void SaveBoats(Boats* Bo);

	friend class Submarines;
	friend class Sailboats;
	friend class Boats;
};

