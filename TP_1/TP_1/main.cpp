#include "Ship.h"
#include "Submarines.h"
#include "Sailboats.h"
#include "Boats.h"


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
	int a;
	Submarines A;

	while (true)
	{
		cout << "\tChoose the type of ship" << endl;
		cout << "  1. Submarine" << endl;
		cout << "  2. Sailboat" << endl;
		cout << "  3. Boat" << endl;
		cout << "  4. Exit" << endl;

		cin >> a;

		switch (a)
		{
		case 1:
		
		while(true)
		{
			cout << "  1. Add" << endl;
			cout << "  2. To change" << endl;
			cout << "  3. Back" << endl;
			cin >> a;


			switch (a)
			{
			case 1:
				A.GetInfo();

				break;
			case 2:
				cout << "To change" << endl;

				break;
			case 3:
				break;

			default:
				continue;
			}


			break;
		}



			break;
		case 2:
			while (true)
			{
				cout << "  1. Add" << endl;
				cout << "  2. To change" << endl;
				cout << "  3. Back" << endl;
				cin >> a;


				switch (a)
				{
				case 1:
					cout << "Add" << endl;

					break;
				case 2:
					cout << "To change" << endl;

					break;
				case 3:
					break;

				default:
					continue;
				}


				break;
			}
			break;
		case 3:
			while (true)
			{
				cout << "  1. Add" << endl;
				cout << "  2. To change" << endl;
				cout << "  3. Back" << endl;
				cin >> a;


				switch (a)
				{
				case 1:
					cout << "Add" << endl;

					break;
				case 2:
					cout << "To change" << endl;

					break;
				case 3:
					break;

				default:
					continue;
				}


				break;
			}
			break;
		case 4:
			exit(0);

		default:
			continue;

		}
	


	}
}
