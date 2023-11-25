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
// 
// 
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
				cout << "  3. Delete" << endl;
				cout << "  4. Back" << endl;			
				BUTTON = _getch();
				switch (BUTTON)
				{
				case '1':
					Su.GetAddSu();
					Keep.SaveSub(&Su);
					break;
				case '2':
					Su.ToChangeSu(&Su, false);
					break;
				case '3':
					Su.ToChangeSu(&Su, true);
					break;
				case '4':
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
				cout << "  3. Delete" << endl;
				cout << "  4. Back" << endl;
				BUTTON = _getch();
				switch (BUTTON)
				{
				case '1':
					Sa.GetAddSa();
					Keep.SaveSail(&Sa);
					break;
				case '2':
					Sa.ToChangeSa(&Sa, false);
					break;
				case '3':
					Sa.ToChangeSa(&Sa, true);
					break;
				case '4':
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
				cout << "  3. Delete" << endl;
				cout << "  4. Back" << endl;
				BUTTON = _getch();
				switch (BUTTON)
				{
				case '1':
					Bo.GetAddBo();
					Keep.SaveBoats(&Bo);
					break;
				case '2':
					Bo.ToChangeBo(&Bo, false);
					break;
				case '3':
					Bo.ToChangeBo(&Bo, true);
					break;
				case '4':
					break;
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

void GetInfor(string StringParam, int& Param, string& Par)
{
	cout << "Enter the " << StringParam << ": ";

	if (Param != 0 && Par[0] == '\\')
	{
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
					if (c != '\b')
					{
						Param = NULL;
						flag = true;
						throw "\nDivision by zero!";
					}
					else
						Param /= 10;

				}
				else
					Param = Param * 10 + t;
			}
			catch (const char* error_message)
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
	else
	{
		cin >> Par;
	}
}

void ReadingValues(char str[], int& Param, string& Par)
{
	if(Param != 0 && Par[0] == '\\')
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
	else
	{
		int j;
		Par = "";
		for (int i = 0; i < 100; i++)
			if (str[i] == '=')
			{
				for (j = 0, i += 2; str[i] != '\0'; i++)
					Par.push_back(str[i]);
				break;
			}
	}
}