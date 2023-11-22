#include "Sailboats.h"

int Sailboats::GetCountSa()
{
	return count;
}

void Sailboats::SetCountSa()
{
	cout << "count = " << count << endl;
}

string Sailboats::GetTypeOfSailboat()
{
	return string(TypeOfSailboat);
}

void Sailboats::SetTypeOfSailboat()
{
	cout << "TypeOfSailboat = " << TypeOfSailboat << endl;
}

string Sailboats::GetTitle()
{
	return string(title);
}

void Sailboats::SetTitle()
{
	cout << "title = " << title << endl;
}

int Sailboats::GetPeacefulOrMilitary()
{
	return PeacefulOrMilitary;
}

void Sailboats::SetPeacefulOrMilitary()
{
	cout << "PeacefulOrMilitary = " << PeacefulOrMilitary << endl;
}

int Sailboats::GetBodyLength()
{
	return BodyLength;
}

void Sailboats::SetBodyLength()
{
	cout << "BodyLength = " << BodyLength << endl;
}

int Sailboats::GetSpeedSa()
{
	return speed;
}

void Sailboats::SetSpeedSa()
{
	cout << "speed = " << speed << endl;
}

int Sailboats::GetCrewSa()
{
	return crew;
}

void Sailboats::SetCrewSa()
{
	cout << "crew = " << crew << endl;
}

void Sailboats::GetInfo()
{
	ifstream fin("InfoSailboats.txt", ios::in);
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


	cout << "Enter the TypeOfSailboat: ";
	cin >> TypeOfSailboat;
	cout << "Enter the title: ";
	cin >> title;

	bool repeat;
	do
	{
		repeat = false;
		cout << "Enter the PeacefulOrMilitary (1 = YES, 0 = NO): ";
		char c = _getch();
		cout << c << endl;
		if (c == '1')
			PeacefulOrMilitary = true;
		else if (c == '0')
			PeacefulOrMilitary = false;
		else
			repeat = true;
	} while (repeat);


	GetInfor("BodyLength", BodyLength);
	GetInfor("MovementSpeed", speed);
	GetInfor("crew", crew);
}
