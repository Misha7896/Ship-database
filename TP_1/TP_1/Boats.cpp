#include "Boats.h"
#include "Keeper.h"

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

void Boats::GetAddBo()
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

	GetInfor("DrivingQualities", DrivingQualities, ZEROstr);
	GetInfor("speed", speed, ZEROstr);
	GetInfor("crew", crew, ZEROstr);
}

void Boats::ToChangeBo(Boats* Bo, bool del)
{
	// Параметр del нужен для реализации удаления корабля

	ifstream fin2("InfoBoats.txt", ios::in);
	if (!fin2.is_open()) cout << "Error: the file did not open!" << endl;
	else
	{
		if (!del)
			cout << "\nSelect the submarine whose parameters you want to CHANGE\n" << endl;
		else
			cout << "\nSelect the submarine whose parameters you want to DELETE\n" << endl;

		char str[100];

		int size = 1000;			// Длина массива
		int lenghArray = 100;		// Длина массива

		char** array = new char* [size];
		for (int i = 0; i < size; i++)
			array[i] = new char[lenghArray];

		int im = 0;

		// Заполняю массив текстом из файла
		while (fin2.getline(str, lenghArray))
		{
			for (int i = 0; i < lenghArray; i++)
				array[im][i] = str[i];
			cout << str << endl;

			array[im + 1][0] = '\r';
			im++;
		}
		cout << endl;

		// Ищу выбранный пользователем корабль по номеру
		ifstream fin("InfoBoats.txt", ios::in);
		if (!fin.is_open()) cout << "Error: the file did not open!" << endl;
		else
		{
			bool repeat = true;
			int c;

			while (repeat)
			{
				GetInfor("its number", c, ZEROstr);

				count = 0;
				fin.clear();
				fin.seekg(0, ios_base::beg);

				while (fin.getline(str, lenghArray))
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

			if (!del)
			{
				cout << str << endl;

				// Вывожу на экран и запоминаю значения переменных
				
				fin.getline(str, lenghArray);
				cout << "1. " << str << endl;
				ReadingValues(str, ZEROnum, purpose);

				fin.getline(str, lenghArray);
				cout << "2. " << str << endl;
				ReadingValues(str, ZEROnum, HousingMaterial);

				fin.getline(str, lenghArray);
				cout << "3. " << str << endl;
				ReadingValues(str, DrivingQualities, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "4. " << str << endl;
				ReadingValues(str, speed, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "5. " << str << endl;
				ReadingValues(str, crew, ZEROstr);

				char BUTTON;
				bool flag;
				do
				{
					flag = false;
					cout << "\nEnter the parameter number: ";

					BUTTON = _getch();
					cout << BUTTON << endl;

					// Изменняю выбранный параметр
					switch (BUTTON)
					{
					case '1':
						GetInfor("purpose", ZEROnum, purpose);
						break;
					case '2':
						GetInfor("HousingMaterial", ZEROnum, HousingMaterial);
						break;
					case '3':
						GetInfor("DrivingQualities", DrivingQualities, ZEROstr);
						break;
					case '4':
						GetInfor("speed", speed, ZEROstr);
						break;
					case '5':
						GetInfor("crew", crew, ZEROstr);
						break;
					default:
						flag = true;
					}
				} while (flag);
			}

			bool flagArray = true;

			// Перезаписываю фаил с полученными изменениями
			ofstream fout4("InfoBoats.txt", ios::trunc);
			fout4.close();

			for (int i = 0; i < size && array[i][0] != '\r'; i++)
			{
				ofstream fout("InfoBoats.txt", ios::app);
				if (array[i][1] == ')') count = (int)array[i][0] - 48;
				else if (array[i][2] == ')')  count = ((int)array[i][0] - 48) * 10 + (int)array[i][1] - 48;
				else if (array[i][3] == ')')  count = ((int)array[i][0] - 48) * 100 + ((int)array[i][1] - 48) * 10 + (int)array[i][2] - 48;
				else if (array[i][4] == ')')  count = ((int)array[i][0] - 48) * 1000 + ((int)array[i][1] - 48) * 100 + ((int)array[i][2] - 48) * 10 + (int)array[i][3] - 48;

				if (count == c)
				{
					if (flagArray && !del)
					{
						Keeper Ke;
						Ke.SaveBoats(Bo);
					}
					flagArray = false;
				}
				else
				{
					flagArray = true;

					for (int j = 0; j < lenghArray && array[i][j] != '\0'; j++)
						fout << array[i][j];
					fout << endl;
				}
				fout.close();
			}
			//fout.close();
		}
		fin.close();
	}
	fin2.close();
}