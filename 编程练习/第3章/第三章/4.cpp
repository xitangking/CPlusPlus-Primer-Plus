//ʱ�任��   ������   June 27,2016   Mon

#include<iostream>

int main4()
{
	using namespace std;
	cout << "������ʱ��________��\b\b\b\b\b\b\b\b\b\b";
	long seconds;
	cin>>seconds;
	long second = seconds;
	int days, hours, minutes;
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	days = hours / 24;
	hours = hours % 24;

	cout << second << " �� = " << days << " �죬" << hours << " ʱ��" << minutes << " �֣�" << seconds << " �롣" << endl;
	cin.get();
	cin.get();
	return 0;
}