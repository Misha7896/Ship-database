#include "Base.h"
#include "Submarines.h"
#include "Sailboats.h"
#include "Boats.h"

#include <conio.h>

using namespace std;

//����� ������� ������ ������ � ��������� ������, ���������� � �������.���
//��������� ����� ���������� : �����, ������, ������, ����� ������������
//���������� ��� �����, ������������ ��������� ��������, ������������
//��������� ��������, ����������.��� ��������� ���������� : ��� ���������,
//��������, ������ ��� �������, ����� �������, �������� �����������,
//������.��� ������ ���������� : ����������, �������� �������, �������
//��������, �������� � ���������� �����, ������� ����� ��������� �� �����.


//throw std::out_of_range

int main(void)
{
	int BUTTON;
	Submarines Su;
	Sailboats Sa;
	Boats Bo;


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
		case '1':
		
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
		case '2':
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
					cout << "Add" << endl;

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
		case '3':
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
					cout << "Add" << endl;

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
