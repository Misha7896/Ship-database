#include "Sailboats.h"
#include "Keeper.h"

Sailboats::Sailboats()
{
	cout << "Sailboats();" << endl;
}
Sailboats::Sailboats(string TypeOfSailboat, string title, bool PeacefulOrMilitary, int BodyLength, int speed, int crew)
{
	cout << "\nSailboats();" << endl;
	this->TypeOfSailboat = TypeOfSailboat;
	this->title = title;
	this->PeacefulOrMilitary = PeacefulOrMilitary;
	this->BodyLength = BodyLength;
	this->speed = speed;
	this->crew = crew;
}
Sailboats::~Sailboats()
{
	cout << "\n~Sailboats();" << endl;
}
Sailboats& Sailboats::operator=(const Sailboats& other)
{
	if (this == &other) return *this;

	this->TypeOfSailboat = other.TypeOfSailboat;
	this->title = other.title;
	this->PeacefulOrMilitary = other.PeacefulOrMilitary;
	this->BodyLength = other.BodyLength;
	this->speed = other.speed;
	this->crew = other.crew;
}

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

void Sailboats::GetAddSa()
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


	GetInfor("BodyLength", BodyLength, ZEROstr);
	GetInfor("speed", speed, ZEROstr);
	GetInfor("crew", crew, ZEROstr);
}

void Sailboats::ToChangeSa(Sailboats* Sa, bool del)
{
	// Параметр del нужен для реализации удаления корабля

	ifstream fin2("InfoSailboats.txt", ios::in);
	if (!fin2.is_open()) cout << "Error: the file did not open!" << endl;
	else
	{
		if (!del)
			cout << "\nSelect the submarine whose parameters you want to CHANGE\n" << endl;
		else
			cout << "\nSelect the submarine whose parameters you want to DELETE\n" << endl;

		char str[100];
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
		ifstream fin("InfoSailboats.txt", ios::in);
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
				ReadingValues(str, ZEROnum, TypeOfSailboat);

				fin.getline(str, lenghArray);
				cout << "2. " << str << endl;
				ReadingValues(str, ZEROnum, title);

				fin.getline(str, lenghArray);
				cout << "3. " << str << endl;

				for (int i = 0; i < 100; i++)
					if (str[i] == '=')
					{
						PeacefulOrMilitary = str[i + 2] - 48;
						break;
					}

				fin.getline(str, lenghArray);
				cout << "4. " << str << endl;
				ReadingValues(str, BodyLength, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "5. " << str << endl;
				ReadingValues(str, speed, ZEROstr);

				fin.getline(str, lenghArray);
				cout << "6. " << str << endl;
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
						GetInfor("TypeOfSailboat", ZEROnum, TypeOfSailboat);
						break;
					case '2':
						GetInfor("title", ZEROnum, title);
						break;
					case '3':
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
						break;
					case '4':
						GetInfor("BodyLength", BodyLength, ZEROstr);
						break;
					case '5':
						GetInfor("speed", speed, ZEROstr);
						break;
					case '6':
						GetInfor("crew", crew, ZEROstr);
						break;
					default:
						flag = true;
					}
				} while (flag);
			}

			bool flagArray = true;

			// Перезаписываю фаил с полученными изменениями
			ofstream fout4("InfoSailboats.txt", ios::trunc);
			fout4.close();

			for (int i = 0; i < size && array[i][0] != '\r'; i++)
			{
				ofstream fout("InfoSailboats.txt", ios::app);
				if (array[i][1] == ')') count = (int)array[i][0] - 48;
				else if (array[i][2] == ')')  count = ((int)array[i][0] - 48) * 10 + (int)array[i][1] - 48;
				else if (array[i][3] == ')')  count = ((int)array[i][0] - 48) * 100 + ((int)array[i][1] - 48) * 10 + (int)array[i][2] - 48;
				else if (array[i][4] == ')')  count = ((int)array[i][0] - 48) * 1000 + ((int)array[i][1] - 48) * 100 + ((int)array[i][2] - 48) * 10 + (int)array[i][3] - 48;

				if (count == c)
				{
					if (flagArray && !del)
					{
						Keeper Ke;
						Ke.SaveSail(Sa);
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