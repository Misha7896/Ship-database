#include "Keeper.h"

void Keeper::SaveSub(Submarines* Su)
{
	ofstream fout("InfoSubmarines.txt", ios::app);
	if (!fout.is_open()) cout << "Error: the file did not open!" << endl;
	fout << Su->GetCountSu() << ")Submarine:" << endl;
	fout << "length = " << Su->GetLength() << endl;
	fout << "width = " << Su->GetWidth() << endl;
	fout << "crew = " << Su->GetCrewSu() << endl;
	fout << "TimeUnderWater = " << Su->GetTimeUnderWater() << endl;
	fout << "speed = " << Su->GetSpeedSu() << endl;
	fout << "MaxUnderwaterSpeed = " << Su->GetMaxUnderwaterSpeed() << endl;
	fout << "armament = " << Su->GetArmament() << endl;
	fout << endl;
	fout.close();
}

void Keeper::SaveSail(Sailboats* Sa)
{
	ofstream fout("InfoSailboats.txt", ios::app);
	if (!fout.is_open()) cout << "Error: the file did not open!" << endl;
	fout << Sa->GetCountSa() << ")Sailboats:" << endl;
	fout << "TypeOfSailboat = " << Sa->GetTypeOfSailboat() << endl;
	fout << "title = " << Sa->GetTitle() << endl;
	fout << "PeacefulOrMilitary = " << Sa->GetPeacefulOrMilitary() << endl;
	fout << "BodyLength = " << Sa->GetBodyLength() << endl;
	fout << "MovementSpeed = " << Sa->GetSpeedSa() << endl;
	fout << "crew = " << Sa->GetCrewSa() << endl;
	fout << endl;
	fout.close();
}

void Keeper::SaveBoats(Boats* Bo)
{
	ofstream fout("InfoBoats.txt", ios::app);
	if (!fout.is_open()) cout << "Error: the file did not open!" << endl;
	fout << Bo->GetCountBo() << ")Boats:" << endl;
	fout << "purpose = " << Bo->GetPurpose() << endl;
	fout << "HousingMaterial = " << Bo->GetHousingMaterial() << endl;
	fout << "DrivingQualities = " << Bo->GetDrivingQualities() << endl;
	fout << "speed = " << Bo->GetSpeedBo() << endl;
	fout << "crew = " << Bo->GetCrewBo() << endl;
	fout << endl;
	fout.close();

}
