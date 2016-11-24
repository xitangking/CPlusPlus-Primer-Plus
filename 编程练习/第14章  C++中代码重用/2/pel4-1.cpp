//pel4-1.cpp -- using Wine class with containment
#include<iostream>
#include"Wine.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Enter name of wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter your numb of years: ";
	int years;
	cin >> years;

	Wine holding(lab, years);
	holding.GetBottles();
	holding.Show();

	const int YEARS = 3;
	int y[YEARS] = { 1993,1995,1998 };
	int b[YEARS] = { 48,60,72 };
	//create new object,initialize using data in arrays y and b
	Wine more("Gushing Grape Red", YEARS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;
	cout << "Bye\n";
	system("pause");
	return 0;
}