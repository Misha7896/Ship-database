#include "Base.h"

void MainFoo(string Base, string parameter, float& Param)
{
	cout << parameter;
	ofstream fout("InfoSubmarines.txt", ios::app);
	fout << Base << ":" << endl;

	cout << "Enter the " << parameter << ":" << endl;
	cin >> Param;
	fout << parameter << " = " << Param << endl;




	fout.close();
}
