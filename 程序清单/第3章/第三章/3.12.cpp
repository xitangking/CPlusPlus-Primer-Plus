//modeulus.cpp--uses % operator to convert lbs to stone
//xtw   2016.6.26
#include<iostream>

int main12()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds:";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs%Lbs_per_stn;
	cout << lbs << "pounds are " << stone << " stone, " << pounds << " pound(s).\n";
	cin.get();
	cin.get();

	return 0;
}