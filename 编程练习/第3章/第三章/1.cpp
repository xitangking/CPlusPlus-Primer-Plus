//身高换算   西唐王   June 26,2016   Sun

#include<iostream>

int main1()
{
	using namespace std;
	cout << "请输入身高为多少厘米:___\b\b\b";
	int centimeter;
	cin >> centimeter;
	int meter;
	const int cen_per_met = 100;
	meter = centimeter / cen_per_met;
	centimeter = centimeter%cen_per_met;
	cout << "你的身高为：" << meter << "米" << centimeter << "厘米" << endl;
	cin.get();
	cin.get();
	return 0;
}