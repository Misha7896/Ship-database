#include "ShipBase.h"

ShipBase::ShipBase()
{
	cout << "ShipBase();" << endl;
	array = new char* [size];
	for (int i = 0; i < size; i++)
		array[i] = new char[lenghArray];
}
ShipBase::~ShipBase()
{
	cout << "~ShipBase();" << endl;
	for (int i = 0; i < size; i++)
		delete[] this->array[i];
	delete[] this->array;
}

//void MainFoo(string Base, string parameter, float& Param)
//{
//	cout << parameter;
//	ofstream fout("InfoSubmarines.txt", ios::app);
//	fout << Base << ":" << endl;
//
//	cout << "Enter the " << parameter << ":" << endl;
//	cin >> Param;
//	fout << parameter << " = " << Param << endl;
//
//
//
//
//	fout.close();
//}

//bool repeat;
//do
//{
//	repeat = false;
//	cout << "Enter the PeacefulOrMilitary (1 = YES, 0 = NO): ";
//	char c = _getch();
//	cout << c;
//	if (c == '1')
//		PeacefulOrMilitary = true;
//	else if (c == '0')
//		PeacefulOrMilitary = false;
//	else
//		repeat = true;
//} while (repeat);