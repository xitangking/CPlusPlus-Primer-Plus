//hexoct1.cpp--shows hex and octal literals 
//xtw   2016.6.26
#include<iostream>
int main3()
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << "(42 in decimal)\n";
	cout << "waist = " << waist << "(0x42 in hex)\n";
	cout << "inseam = " << inseam << "(042 in octal)\n";
	cin.get();
	return 0;
}