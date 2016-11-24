//typecast.cpp--forcing type changes
//xtw   2016.6.26
#include<iostream>

int main14()
{
	using namespace std;
	int auks, bats, coots;

	//the following statement adds the values as double
	//then converts the result to int
	auks = 19.99 + 11.99;

	//these statements add values as int
	bats = (int)19.99 + (int)11.99;//old C syntax
	coots = int(19.99) + int(11.99);//New C++ syntax
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The cods for " << ch << " is " << int(ch) << endl;
	cout << "Yes,the code is:" << static_cast<int>(ch) << endl;
	cin.get();

	return 0;
}