//���������ĵ�λ����--�в����з���ֵ�ĺ�������   ������   June 23,2016

#include<iostream>

double Change1(double x)
{
	return x * 63240;
}
int main6()
{
	using namespace std;
	cout << "Enter the number of light year:";
	double Light;
	cin >> Light;
	double Units = Change1(Light);
	cout << Light << " light year = " << Units << " astronomical units." << endl;
	cin.get();
	cin.get();
	return 0;
}
