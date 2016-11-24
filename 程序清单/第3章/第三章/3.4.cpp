//hexoct2.cpp--display values in hex and octal
//xtw   2016.6.26
#include<iostream>
int main4()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam =42;
	cout << "Monsieur cute a striking figure!" << endl;
	cout << "chest = " << chest << "(decimal for 42)" << endl;
	cout << hex;//manipulator(²Ù×÷¡¢·½·¨) for changing number base
	cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
	cout << oct;//manipulator for changing number base
	cout << "inseam = " << inseam << "(octal for 42)" << endl;
	cin.get();
	return 0;

}