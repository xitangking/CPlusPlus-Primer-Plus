//bondini.cpp--using escape sequences
//xtw   2016.6.26
#include<iostream>

int main7()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;  
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan 23!\n";
	cin.get();
	cin.get();
	return 0;
}