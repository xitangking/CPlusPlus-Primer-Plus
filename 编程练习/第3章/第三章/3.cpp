//纬度换算   西唐王   June 27,2016   Mon

#include<iostream>

int main3()
{
	using namespace std;
	cout << "请输入纬度:\n___度\b\b\b\b\b" ;
	double degree;
	double minutes;
	double seconds;
	cin >> degree;
	cout << "\b";
	cout << "___分\b\b\b\b\b";
	cin >> minutes;
	cout << "___秒\b\b\b\b\b";
	cin >> seconds;
	double degrees = degree + (seconds / 3600) + (minutes / 60);
	cout << degree << " 度," << minutes << " 分," << seconds << " 秒 = " << degrees << " 度." << endl;
	cin.get();
	cin.get();
	return 0;
}