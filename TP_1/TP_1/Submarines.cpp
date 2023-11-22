#include "Submarines.h"
//#include <stdexcept>

int Submarines::GetCountSu()
{
	return count;
}
void Submarines::SetCountSu()
{
	cout << "count = " << count << endl;
}
int Submarines::GetLength()
{
	return length;
}
void Submarines::SetLength()
{
	cout << "length = " << length << endl;
}
int Submarines::GetWidth()
{
	return width;
}
void Submarines::SetWidth()
{
	cout << "width = " << width << endl;
}
int Submarines::GetCrewSu()
{
	return crew;
}
void Submarines::SetCrewSu()
{
	cout << "crew = " << crew << endl;
}
int Submarines::GetTimeUnderWater()
{
	return TimeUnderWater;
}
void Submarines::SetTimeUnderWater()
{
	cout << "TimeUnderWater = " << TimeUnderWater << endl;
}
int Submarines::GetSpeedSu()
{
	return speed;
}
void Submarines::SetSpeedSu()
{
	cout << "speed = " << speed << endl;
}
int Submarines::GetMaxUnderwaterSpeed()
{
	return MaxUnderwaterSpeed;
}
void Submarines::SetMaxUnderwaterSpeed()
{
	cout << "MaxUnderwaterSpeed = " << MaxUnderwaterSpeed << endl;
}
int Submarines::GetArmament()
{
	return armament;
}
void Submarines::SetArmament()
{
	cout << "armament = " << armament << endl;
}

void Submarines::GetInfo()
{
	ifstream fin("InfoSubmarines.txt", ios::in);
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

	GetInfor("length", length);
	GetInfor("width", width);
	GetInfor("crew", crew);
	GetInfor("TimeUnderWater", TimeUnderWater);
	GetInfor("speed", speed);
	GetInfor("MaxUnderwaterSpeed", MaxUnderwaterSpeed);
	GetInfor("armament", armament);
}

void Submarines::ToChange()
{
	ifstream fin2("InfoSubmarines.txt", ios::in);
	if (!fin2.is_open()) cout << "Error: the file did not open!" << endl;

	cout << "Select the submarine whose parameters you want to change" << endl;
	char str[100];
	
	while (fin2.getline(str, 100))
		cout << str << endl;
	
	fin2.close();

	ifstream fin("InfoSubmarines.txt", ios::in);
	bool repeat = true;

	while(repeat)
	{
		int c;
		GetInfor("its number", c);

		count = 0;

		while (fin.getline(str, 100))
		{
			if (str[1] == ')') count = (int)str[0] - 48;
			else if (str[2] == ')')  count = ((int)str[0] - 48) * 10 + (int)str[1] - 48;
			else if (str[3] == ')')  count = ((int)str[0] - 48) * 100 + ((int)str[1] - 48) * 10 + (int)str[2] - 48;
			else if (str[4] == ')')  count = ((int)str[0] - 48) * 1000 + ((int)str[1] - 48) * 100 + ((int)str[2] - 48) * 10 + (int)str[3] - 48;

			if (count == c)
			{
				repeat = false;
				break;
			}
		}
	}

	cout << str << endl;

	fin.getline(str, 100);
	cout << "1. " << str << endl;
	ReadingValues(str, length);

	fin.getline(str, 100);
	cout << "2. " << str << endl;
	ReadingValues(str, width);

	fin.getline(str, 100);
	cout << "3. " << str << endl;
	ReadingValues(str, crew);

	fin.getline(str, 100);
	cout << "4. " << str << endl;
	ReadingValues(str, TimeUnderWater);

	fin.getline(str, 100);
	cout << "5. " << str << endl;
	ReadingValues(str, speed);

	fin.getline(str, 100);
	cout << "6. " << str << endl;
	ReadingValues(str, MaxUnderwaterSpeed);

	fin.getline(str, 100);
	cout << "7. " << str << endl;
	ReadingValues(str, armament);

	bool flag;
	do
	{
		flag = false;
		cout << "Enter the parameter number: ";

		char BUTTON = _getch();
		switch (BUTTON)
		{
		case '1':
			cout << "length = ";
			cin >> length;
			break;

		case '2':
			cout << "width = ";
			cin >> width;
			break;

		case '3':
			cout << "crew = ";
			cin >> crew;
			break;

		case '4':
			cout << "TimeUnderWater = ";
			cin >> TimeUnderWater;
			break;

		case '5':
			cout << "MaxSpeedOnTheWater = ";
			cin >> speed;
			break;

		case '6':
			cout << "MaxUnderwaterSpeed = ";
			cin >> MaxUnderwaterSpeed;
			break;

		case '7':
			cout << "armament = ";
			cin >> armament;
			break;

		default:
			flag = true;
		}

	} while (flag);

	fin.close();
}

