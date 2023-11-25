#include "Submarines.h"
#include "Keeper.h"
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

void Submarines::GetAddSu()
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

	GetInfor("length", length, ZEROstr);
	GetInfor("width", width, ZEROstr);
	GetInfor("crew", crew, ZEROstr);
	GetInfor("TimeUnderWater", TimeUnderWater, ZEROstr);
	GetInfor("speed", speed, ZEROstr);
	GetInfor("MaxUnderwaterSpeed", MaxUnderwaterSpeed, ZEROstr);
	GetInfor("armament", armament, ZEROstr);
}

void Submarines::ToChangeSu(Submarines* Su, bool del)
{
	// Параметр del нужен для реализации удаления корабля
	ifstream fin2("InfoSubmarines.txt", ios::in);
	if (!fin2.is_open()) cout << "Error: the file did not open!" << endl;
	else
	{
		if(!del)
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
			//size++;
			//array = new char*[size];
			////for (int i = 0; i < size; i++)
			//array[size - 1] = new char[lenghArray];

			for (int i = 0; i < lenghArray; i++)
				array[im][i] = str[i];
			cout << str << endl;

			array[im + 1][0] = '\r';
			im++;
		}
		cout << endl;


		//for (int i = 0; i < size && array[i][0] != '\r'; i++)
		//{
		//	for (int j = 0; j < 100 && array[i][j] != '\0'; j++)
		//		cout << array[i][j];
		//	cout << endl;
		//}

		// Ищу выбранный пользователем корабль по номеру
		ifstream fin("InfoSubmarines.txt", ios::in);
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
				ReadingValues(str, length, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "2. " << str << endl;
				ReadingValues(str, width, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "3. " << str << endl;
				ReadingValues(str, crew, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "4. " << str << endl;
				ReadingValues(str, TimeUnderWater, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "5. " << str << endl;
				ReadingValues(str, speed, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "6. " << str << endl;
				ReadingValues(str, MaxUnderwaterSpeed, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "7. " << str << endl;
				ReadingValues(str, armament, ZEROstr);


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
						GetInfor("length", length, ZEROstr);
						break;
					case '2':
						GetInfor("width", width, ZEROstr);
						break;
					case '3':
						GetInfor("crew", crew, ZEROstr);
						break;
					case '4':
						GetInfor("TimeUnderWater", TimeUnderWater, ZEROstr);
						break;
					case '5':
						GetInfor("speed", speed, ZEROstr);
						break;
					case '6':
						GetInfor("MaxUnderwaterSpeed", MaxUnderwaterSpeed, ZEROstr);
						break;
					case '7':
						GetInfor("armament", armament, ZEROstr);
						break;
					default:
						flag = true;
					}
				} while (flag);
			}

			// Перезаписываю фаил с полученными изменениями
			//if (!fout.is_open()) cout << "Error: the file did not open!" << endl;
			bool flagArray = true;

			ofstream fout4("InfoSubmarines.txt", ios::trunc);
			fout4.close();

			for (int i = 0; i < size && array[i][0] != '\r'; i++)
			{
				ofstream fout("InfoSubmarines.txt", ios::app);
				if (array[i][1] == ')') count = (int)array[i][0] - 48;
				else if (array[i][2] == ')')  count = ((int)array[i][0] - 48) * 10 + (int)array[i][1] - 48;
				else if (array[i][3] == ')')  count = ((int)array[i][0] - 48) * 100 + ((int)array[i][1] - 48) * 10 + (int)array[i][2] - 48;
				else if (array[i][4] == ')')  count = ((int)array[i][0] - 48) * 1000 + ((int)array[i][1] - 48) * 100 + ((int)array[i][2] - 48) * 10 + (int)array[i][3] - 48;

				if (count == c)
				{
					if(flagArray && !del)
					{
						Keeper Ke;
						Ke.SaveSub(Su);
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