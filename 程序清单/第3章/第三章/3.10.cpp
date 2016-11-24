//arith.cpp--some C++ arithmetic
//xtw   2016.6.26
#include<iostream>

int main10()
{
	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number:";
	cin >> heads;
	cout << "Enter another number:";
	cin >> hats;

	cout << "hats = " << hats << ";heads = " << heads << endl;
	cout << "hats + heads " << hats + heads << endl;
	cout << "hats - heads " << hats - heads << endl;
	cout << "hats * heads " << hats*heads << endl;
	cout << "hats / heads " << hats / heads << endl;
	cin.get();
	cin.get();
	return 0;
}