#include "ShipBase.h"
#include "Submarines.h"
#include "Sailboats.h"
#include "Boats.h"
#include "Keeper.h"


//Класс Корабль хранит данные о подводных лодках, парусниках и катерах.Для
//подводной лодки определено : длина, ширина, экипаж, время непрерывного
//пребывания под водой, максимальная подводная скорость, максимальная
//подводная скорость, вооружение.Для парусника определено : тип парусника,
//название, мирный или военный, длина корпуса, скорость перемещения,
//экипаж.Для катера определено : назначение, материал корпуса, ходовые
//качества, скорость и количество людей, которые могут находится на борту.
//
// 
//● Работать необходимо с динамическим выделением памяти.
//● У пользователя должен быть доступ для взаимодействия с каждым из
//объектов - наследников: добавлять, удалять, выводить на экран, изменять
//данные и пр.
//● Создать все конструкторы(с параметрами, без параметров и копирования) и
//деструктор, использовать переопределение операторов.Каждый вызов
//конструктора и деструктора должен сопровождаться выводом этой
//информации пользователю(какой объект, какой конструктор или деструктор вызван).
// 
//● Определить исключения(exceptions) и применить в программе.Каждое
//исключение должно сопровождаться текстом, поясняющим возникшую
//исключительную ситуацию.


//throw std::out_of_range

int main(void)
{
	int BUTTON;
	//Ship Sh;
	Submarines Su;
	Sailboats Sa;
	Boats Bo;
	Keeper Keep;

	while (true)
	{
		cout << "\n\tChoose the type of ship" << endl;
		cout << "  1. Submarine" << endl;
		cout << "  2. Sailboat" << endl;
		cout << "  3. Boat" << endl;
		cout << "  4. Exit" << endl;

		BUTTON = _getch();
		
		switch (BUTTON)
		{
		case '1':		// Submarines
		
		while(true)
		{
			cout << "\n\t Submarine" << endl;
			cout << "  1. Add" << endl;
			cout << "  2. To change" << endl;
			cout << "  3. Back" << endl;
			
			BUTTON = _getch();

			switch (BUTTON)
			{
			case '1':
				Su.GetInfo();
				Keep.SaveSub(&Su);
				break;
			case '2':
				Su.ToChange(&Su);
				break;
			case '3':
				break;

			default:
				continue;
			}
			break;
		}
			break;
		case '2':		// Sailboats
			while (true)
			{
				cout << "\n\t Sailboat" << endl;
				cout << "  1. Add" << endl;
				cout << "  2. To change" << endl;
				cout << "  3. Back" << endl;

				BUTTON = _getch();

				switch (BUTTON)
				{
				case '1':
					Sa.GetInfo();
					Keep.SaveSail(&Sa);
					break;
				case '2':
					cout << "\nTo change..." << endl;

					break;
				case '3':
					break;

				default:
					continue;
				}


				break;
			}
			break;
		case '3':		// Boats
			while (true)
			{
				cout << "\n\t Boat" << endl;
				cout << "  1. Add" << endl;
				cout << "  2. To change" << endl;
				cout << "  3. Back" << endl;

				BUTTON = _getch();

				switch (BUTTON)
				{
				case '1':
					Bo.GetInfo();
					Keep.SaveBoats(&Bo);
					break;
				case '2':
					cout << "\nTo change..." << endl;

					break;
				case '3':
					break;

				default:
					continue;
				}


				break;
			}
			break;
		case '4':
			exit(0);

		default:
			continue;

		}
	


	}
}

void GetInfor(string StringParam, int& Param)
{
	cout << "Enter the " << StringParam << ": ";

	bool flag = true;
	Param = 0;

	while (true)
	{
		char c = _getch();
		cout << c;

		// Проверяю конец введения числа
		if (c == '\r' && !flag) break;

		int t = c - 48;		// Получаю число
		flag = false;

		// Проверяю, ввёл ли пользователь число или другой символ и сообщаю об этом
		try
		{
			if (t < 1 || t > 10)
			{
				Param = NULL;
				flag = true;
				throw "\nDivision by zero!";
			}
			else
				Param = Param * 10 + t;
		}
		catch(const char* error_message)
		{
			cout << error_message << endl;
			cout << "Error: enter the number" << endl;
		}

		// Сообщаю если было введено не число
		//if (flag)
		//	cout << endl << "Error: enter the number" << endl;
	}
	cout << endl;
}

void ReadingValues(char str[], int& Param)
{
	Param = 0;

	for (int i = 0; i < 100; i++)
		if (str[i] == '=')
		{
			for (i += 2; str[i] != '\0'; i++)
				Param = Param * 10 + (int)str[i] - 48;
			break;
		}
}