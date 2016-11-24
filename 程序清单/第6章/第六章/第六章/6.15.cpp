//outfile.cpp--writing to a file   xtw   July 4,2016   Mon
#include<iostream>
#include<fstream>					//for file  I/O

int main15()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream fout;//creater a object for output
	fout.open("6.15.txt");//associate with a file

	cout << "Enter make and model of autonobile:";
	cin.getline(automobile, 50);
	cout << "Enter the model year:";
	cin >> year;
	cout << "Enter the original asking price:" << endl;
	cin >> a_price;
	d_price = 0.913*a_price;

	//display information on screen with cout

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model:" << automobile << endl;
	cout << "Year:" << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	//now exact same things using fout instend of cout

	fout << fixed;
	fout.precision(2);
	fout.setf(ios_base::showpoint);
	fout << "Make and model:" << automobile << endl;
	fout << "Year:" << year << endl;
	fout << "Was asking $" << a_price << endl;
	fout << "Now asking $" << d_price << endl;
	fout.close();
	cin.get();
	cin.get();
	return 0;
}