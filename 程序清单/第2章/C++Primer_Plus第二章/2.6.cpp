//convert.cpp--converts stone to pounds		xtw		2016.6.23
#include<iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone:";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds."<<endl;
	cin.get();
	cin.get();
}

int stonetolb(int sts)
{
	return 14 * sts;
}
