//divide.cpp--integer and floating-point division
//xtw   2016.6.26
#include<iostream>

int main11()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating point division: 9.0/5.0 = "<< 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants:1e7/9.0 = " << 1.e7 / 9.0 << endl;
	cout << "float constants:1e7f/9.0f = " << 1.e7f / 9.0f << endl;
	cin.get();
	return 0;
}