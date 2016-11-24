//格式输出   西唐王    June 23,2016

#include<iostream>

using namespace std;

void func6(int x, int y)
{
	cout << "Time " << x << ":" << y << endl;
}
int main7()
{
	cout << "Please enter the number of hours:";
	int hours;
	cin >> hours;
	cout << "Please enter the number of minutes:";
	int minutes;
	cin >> minutes;
	func6(hours, minutes);
	cin.get();
	cin.get();
	return 0;
}
