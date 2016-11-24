#include"Plorg.h"
#include<iostream>

using namespace std;

int main7()
{
	Plorg plorg1, plorg2(9, "xtw");
	plorg1.Print();
	plorg2.Print();

	plorg1.SetCI(100);
	plorg1.Print();
	system("pause");
	return 0;
}