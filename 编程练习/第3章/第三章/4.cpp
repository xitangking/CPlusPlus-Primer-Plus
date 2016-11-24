//时间换算   西唐王   June 27,2016   Mon

#include<iostream>

int main4()
{
	using namespace std;
	cout << "请输入时间________秒\b\b\b\b\b\b\b\b\b\b";
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

	cout << second << " 秒 = " << days << " 天，" << hours << " 时，" << minutes << " 分，" << seconds << " 秒。" << endl;
	cin.get();
	cin.get();
	return 0;
}