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


int main(void)
{
	int a;
	Submarines A;

	while (true)
	{
		cout << "\t" << endl;
		cout << "1. " << endl;

		cin >> a;

		switch (a)
		{
		case 1:
			A.length = 30;
			cout << A.length << endl;
			break;

		}



	}
}
