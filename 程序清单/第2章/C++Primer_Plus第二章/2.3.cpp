//getinfo.cpp--input and out   xtw 2016.6.23
#include<iostream>

int main3()
{
	using namespace std;
	int carrots;
	cout << "Hoe many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots += 2;
	cout << "Now you have " << carrots << " carrots" << endl;
	cin.get();
	cin.get();
	return 0;
}