#include "Boats.h"

int Boats::GetCountBo()
{
    return count;
}

void Boats::SetCountBo()
{
    cout << "count = " << count << endl;
}

string Boats::GetPurpose()
{
    return string(purpose);
}

void Boats::SetPurpose()
{
    cout << "purpose = " << purpose << endl;
}

string Boats::GetHousingMaterial()
{
    return string(HousingMaterial);
}

void Boats::SetHousingMaterial()
{
    cout << "HousingMaterial = " << HousingMaterial << endl;
}

int Boats::GetDrivingQualities()
{
    return DrivingQualities;
}

void Boats::SetDrivingQualities()
{
    cout << "DrivingQualities = " << DrivingQualities << endl;
}

int Boats::GetSpeedBo()
{
    return speed;
}

void Boats::SetSpeedBo()
{
    cout << "speed = " << speed << endl;
}

int Boats::GetCrewBo()
{
    return crew;
}

void Boats::SetCrewBo()
{
    cout << "crew = " << crew << endl;
}

void Boats::GetInfo()
{
	ifstream fin("InfoBoats.txt", ios::in);
	if (!fin.is_open()) cout << "Error: the file did not open!" << endl;

	char str[100];

	while (fin.getline(str, 100))
	{
		if (str[1] == ')') count = (int)str[0] - 48;
		else if (str[2] == ')')  count = ((int)str[0] - 48) * 10 + (int)str[1] - 48;
		else if (str[3] == ')')  count = ((int)str[0] - 48) * 100 + ((int)str[1] - 48) * 10 + (int)str[2] - 48;
		else if (str[4] == ')')  count = ((int)str[0] - 48) * 1000 + ((int)str[1] - 48) * 100 + ((int)str[2] - 48) * 10 + (int)str[3] - 48;
	}
	fin.close();

	count++;

	cout << "Enter the purpose: ";
	cin >> purpose;
	cout << "Enter the HousingMaterial: ";
	cin >> HousingMaterial;

	GetInfor("DrivingQualities", DrivingQualities);
	GetInfor("speed", speed);
	GetInfor("crew", crew);
}
