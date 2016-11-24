//init.cpp--type changes on initialization
//xtw   2016.6.26
#include<iostream>

int main13()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;//int converted to float
	int guess(3.9832);//double converted to int
	int debt = 7.2E12;//result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	cin.get();
	return 0;
}