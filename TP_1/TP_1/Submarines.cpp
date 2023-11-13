#include "Submarines.h"

void GetInfo(string Base, string parameter, float& Param, string ParamLength, float length)
{

	MainFoo(Base, ParamLength, length);

	ofstream fout("InfoSubmarines.txt", ios::app);
	fout << "Submarine (id: " << "id" << ")" << endl;

	cout << "Enter the length:" << endl;
	cin >> length;
	fout << "length = " << length << endl;



	fout.close();
}